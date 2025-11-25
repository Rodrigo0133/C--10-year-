#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Escolha = 0;
    int Numero_1 = 0;
    int bit = 0;
    int total = 0;
    int lang = 0;
    int ol = 0;
    bool running = true;

    int hexNumeros[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    char hexLetras[6] = { 'A','B','C','D','E','F' };
    std::string hexall[] = {
        "0000", "0001", "0010", "0011",
        "0100", "0101", "0110", "0111",
        "1000", "1001", "1010", "1011",
        "1100", "1101", "1110", "1111"
    };
    std::string dech[1000];


    do {
        std::cout << "----------------------------\n";
        std::cout << "[1] Português\n[2] English\n";
        std::cout << "----------------------------\n";
        std::cin >> lang;
        if (lang != 1 && lang != 2) {
            std::cout << "Erro: escolha inválida\n";
        }
    } while (lang != 1 && lang != 2);

    std::system("cls");

    while (running) {

        while (running && lang == 1) {
            bit = 128;
            std::cout << "\nDesenvolvedor - Rodrigo Galante\n";
            std::cout << "----------------------------\n";
            std::cout << "[1] decimal\n[2] binario\n[3] hexacimal\n[4] Definições\n[5] Sair\n";
            std::cout << "----------------------------\n";
            std::cin >> Escolha;
            std::system("cls");

            switch (Escolha) {
            case 1: {
                int Es2 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] decimal para binario\n[2] Voltar\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es2;
                    if (Es2 == 1) {
                        std::cout << "Diz o número decimal que quer transformar: ";
                        std::cin >> Numero_1;
                        if (std::cin.fail()) {
                            std::cin.clear();
                            std::cin.ignore(10000, '\n');
                            std::cout << "Erro: tem de ser número\n";
                            std::cout << "\n\nPara voltar ao inicio clique ENTER";
                            std::cin.get();
                            std::cin.get();                           
                            system("cls");
                            continue;
                        }
                        bit = 1;
                        while (bit <= Numero_1) bit <<= 1;
                        bit >>= 1;
                        for (; bit >= 1; bit >>= 1) {
                            if (Numero_1 >= bit) {
                                std::cout << "1";
                                Numero_1 -= bit;
                            }
                            else {
                                std::cout << "0";
                            }
                        }
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                    }
                } while (Es2 != 2);
                break;
            }
            case 2: {
                int Es3 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] binario em decimal\n[2] binario para hexacimal\n[3] Voltar\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es3;
                    switch (Es3) {
                    case 1:
                        std::cout << "Diz o número binario para decimal entre espaços (ex: 0 1 1 1 0 0 0 0):\n";
                        total = 0;
                        for (bit = 128; bit >= 1; bit >>= 1) {
                            std::cin >> Numero_1;
                            if (Numero_1 == 1) total += bit;
                        }
                        std::cout << "O número em decimal é " << total << "\n";
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 2:
                        std::cout << "Quantos grupos binários (ex: 0111 1000 -> 2)?\n";
                        std::cin >> ol;
                        std::cout << "Escreve os grupos binários separados por espaço (ex: 0111 1000):\n";
                        for (int h = 0; h < ol; h++) std::cin >> dech[h];
                        for (int n = 0; n < ol; n++) {
                            for (int k = 0; k < 16; k++) {
                                if (dech[n] == hexall[k]) {
                                    if (k < 10) std::cout << hexNumeros[k];
                                    else std::cout << hexLetras[k - 10];
                                }
                            }
                        }
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 3:
                        break;
                    default:
                        std::cout << "Erro, tente outra vez!\n";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    }
                } while (Es3 != 3);
                break;
            }
            case 3: {
                int Es4 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] hexacimal para binario\n[2] Voltar\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es4;
                    if (Es4 == 1) {
                        std::string hx;
                        std::cout << "Escreve o número hexadecimal (0-9 e A-F): ";
                        std::cin >> hx;
                        for (size_t u = 0; u < hx.size(); ++u) {
                            if (hx[u] >= '0' && hx[u] <= '9') {
                                int num = hx[u] - '0';
                                std::cout << hexall[num];
                            }
                            else if (hx[u] >= 'A' && hx[u] <= 'F') {
                                int num = hx[u] - 'A' + 10;
                                std::cout << hexall[num];
                            }
                            else {
                                std::cout << "\nErro: número/letra incorreto: " << hx[u] << "\n";
                            }
                        }
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                    }
                } while (Es4 != 2);
                break;
            }

            case 4: {
                int Ver1 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] Lingua\n[2] Versão\n[3] Notas de atualização\n[4] Voltar\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Ver1;
                    system("cls");
                    switch (Ver1) {
                    case 1:
                        std::cout << "----------------------------\n";
                        std::cout << "[1] Português\n[2] English\n";
                        std::cout << "----------------------------\n";
                        std::cin >> lang;
                        system("cls");

                        break;
                    case 2:
                        std::cout << "----------------------------\n";
                        std::cout << "Versão 1.1\n";
                        std::cout << "----------------------------\n";
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 3:
                        std::cout << "----------------------------\n";
                        std::cout << "1.1-\n";
                        std::cout << "- Melhorias gerais no programa\n";
                        std::cout << "- Implementado sistema de idiomas (Português / Inglês)\n";
                        std::cout << "- Menus reorganizados por categorias (Decimal, Binário, Hexadecimal, Definições)\n";
                        std::cout << "- Conversão de Binário para Hexadecimal reformulada\n";
                        std::cout << "- Conversão de Hexadecimal para Binário melhorada\n";
                        std::cout << "- Tratamento de erros no cin reforçado\n";
                        std::cout << "- Estrutura de conversões mais estável\n";
                        std::cout << "- Código geral limpo e reorganizado\n";
                        std::cout << "- Remoção do menu antigo\n";
                        std::cout << "- Remoção de variáveis inutilizadas\n";
                        std::cout << "- Remoção de código duplicado\n";
                        std::cout << "----------------------------\n";
                        std::cout << "1.0 - \n";
                        std::cout << "Criação do programa";
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 4:
                        break;
                    default:
                        std::cout << "Opção inválida!\n";
                        std::cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    }
                } while (Ver1 != 4 && lang == 1);
                break;
            }
            case 5:
                running = false;
                break;
            default:
                std::cout << "Erro, tente outra vez!\n";
                std::cin.ignore();
                std::cin.get();
                break;
            }

            std::system("cls");
        }

        if (!running) break;


        while (running && lang == 2) {
            bit = 128;
            std::cout << "\nDeveloper - Rodrigo Galante\n";
            std::cout << "----------------------------\n";
            std::cout << "[1] decimal\n[2] binary\n[3] hexadecimal\n[4] Settings\n[5] Exit\n";
            std::cout << "----------------------------\n";
            std::cin >> Escolha;
            std::system("cls");

            switch (Escolha) {
            case 1: {
                int Es2 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] decimal to binary\n[2] Back\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es2;
                    if (Es2 == 1) {
                        std::cout << "Enter the decimal number to convert: ";
                        std::cin >> Numero_1;
                        if (std::cin.fail()) {
                            std::cin.clear();
                            std::cin.ignore(10000, '\n');
                            std::cout << "Error: must be a number\n";
                            std::cout << "\n\nPress ENTER to return";
                            std::cin.get();
                            std::cin.get();                           
                            system("cls");
                            continue;
                        }
                        bit = 1;
                        while (bit <= Numero_1) bit <<= 1;
                        bit >>= 1;
                        for (; bit >= 1; bit >>= 1) {
                            if (Numero_1 >= bit) {
                                std::cout << "1";
                                Numero_1 -= bit;
                            }
                            else {
                                std::cout << "0";
                            }
                        }
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");;
                    }
                } while (Es2 != 2);
                break;
            }
            case 2: {
                int Es3 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] binary to decimal\n[2] binary to hexadecimal\n[3] Back\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es3;
                    switch (Es3) {
                    case 1:
                        std::cout << "Enter the binary number separated by spaces (ex: 0 1 1 1 0 0 0 0):\n";
                        total = 0;
                        for (bit = 128; bit >= 1; bit >>= 1) {
                            std::cin >> Numero_1;
                            if (Numero_1 == 1) total += bit;
                        }
                        std::cout << "The number in decimal is " << total << "\n";
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 2:
                        std::cout << "How many binary groups (ex: 0111 1000 -> 2)?\n";
                        std::cin >> ol;
                        std::cout << "Write the binary groups separated by space (ex: 0111 1000):\n";
                        for (int h = 0; h < ol; h++) std::cin >> dech[h];
                        for (int n = 0; n < ol; n++) {
                            for (int k = 0; k < 16; k++) {
                                if (dech[n] == hexall[k]) {
                                    if (k < 10) std::cout << hexNumeros[k];
                                    else std::cout << hexLetras[k - 10];
                                }
                            }
                        }
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 3:
                        break;
                    default:
                        std::cout << "Error, try again!\n";
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    }
                } while (Es3 != 3);
                break;
            }
            case 3: {
                int Es4 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] hexadecimal to binary\n[2] Back\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Es4;
                    if (Es4 == 1) {
                        std::string hx;
                        std::cout << "Write the hexadecimal number (0-9 and A-F): ";
                        std::cin >> hx;
                        for (size_t u = 0; u < hx.size(); ++u) {
                            if (hx[u] >= '0' && hx[u] <= '9') {
                                int num = hx[u] - '0';
                                std::cout << hexall[num];
                            }
                            else if (hx[u] >= 'A' && hx[u] <= 'F') {
                                int num = hx[u] - 'A' + 10;
                                std::cout << hexall[num];
                            }
                            else {
                                std::cout << "\nError: incorrect number/letter: " << hx[u] << "\n";
                            }
                        }
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                    }
                } while (Es4 != 2);
                break;
            }

            case 4: {
                int Ver1 = 0;
                do {
                    std::cout << "----------------------------\n";
                    std::cout << "[1] Language\n[2] Version\n[3] Patch Notes\n[4] Back\n";
                    std::cout << "----------------------------\n";
                    std::cin >> Ver1;
                    system("cls");
                    switch (Ver1) {
                    case 1:
                        std::cout << "----------------------------\n";
                        std::cout << "[1] Portuguese\n[2] English\n";
                        std::cout << "----------------------------\n";
                        std::cin >> lang;
                        system("cls");
                        break;
                    case 2:
                        std::cout << "----------------------------\n";
                        std::cout << "Version 1.1\n";
                        std::cout << "----------------------------\n";
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 3:
                        std::cout << "----------------------------\n";
                        std::cout << "1.1-\n";
                        std::cout << "- General improvements in the program\n";
                        std::cout << "- Implemented language system (Portuguese / English)\n";
                        std::cout << "- Menus reorganized by categories (Decimal, Binary, Hexadecimal, Settings)\n";
                        std::cout << "- Reworked Binary to Hexadecimal conversion\n";
                        std::cout << "- Improved Hexadecimal to Binary conversion\n";
                        std::cout << "- Enhanced error handling in cin\n";
                        std::cout << "- More stable conversion structure\n";
                        std::cout << "- Cleaned and reorganized overall code\n";
                        std::cout << "- Removed old menu\n";
                        std::cout << "- Removed unused variables\n";
                        std::cout << "- Removed duplicated code\n";
                        std::cout << "----------------------------\n";
                        std::cout << "1.0 -\n";
                        std::cout << "- Creation of the program\n";
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    case 4:
                        break;
                    default:
                        std::cout << "Invalid option!\n";
                        std::cout << "\n\nPress ENTER to return";
                        std::cin.ignore();
                        std::cin.get();
                        system("cls");
                        break;
                    }
                } while (Ver1 != 4 && lang == 2);
                break;
            }
            case 5:
                running = false;
                break;
            default:
                std::cout << "Error, try again!\n";
                std::cout << "\n\nPress ENTER to return";
                std::cin.ignore();
                std::cin.get();
                break;
            }


        }
    }

    return 0;
}