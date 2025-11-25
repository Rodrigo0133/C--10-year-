#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int Escolha, Numero_1, bit, total = 0, i = -1,el,w;
    char hexb[50];
    int hexNumeros[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    char hexLetras[6] = { 'A','B','C','D','E','F' };
    string hexall[] = {
    "0000", "0001", "0010", "0011",
    "0100", "0101", "0110", "0111",
    "1000", "1001", "1010", "1011",
    "1100", "1101", "1110", "1111" };
    int ol = 0;
    string dech[1000];
    do {
        bit = 128;
        cout << "\nDesenvolvedor - Rodrigo Galante\n";
        cout << "----------------------------\n";
        cout << "[1] Transformar decimal em binário\n[2] Transformar bínario em decimal\n[3] Transformar hexacimal em binario\n[4] Transformar binario em hexacimal.\n[5] Versão \n[6] Sair da app\n";
        cout << "----------------------------\n";
        cin >> Escolha;
        system("cls");
        switch (Escolha) {
        case 1:
            cout << "Diz o número decimal que quer transformar: ";
            cin >> Numero_1;
            if (cin.fail()) {
                cout << "Erro: tem de ser número\n";
                cout << "\n\nPara voltar ao inicio clique ENTER";
                cin.ignore();
                cin.get();
                break;
            }
            while (bit <= Numero_1) {
                bit = bit * 2;
            }
            bit = bit / 2;
            for (bit; bit >= 1; bit /= 2) {
                if (Numero_1 >= bit) {
                    cout << "1";
                    Numero_1 -= bit;
                }
                else {
                    cout << "0";
                }
            }
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;
        case 2:
            cout << "Diz o número binario para decimal: \n";
            for (bit; bit >= 1; bit /= 2) {
                cin >> Numero_1;
                if (Numero_1 == 1) {
                    total += bit;
                }
            }
            cout << "O número em decimal é " << total;
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;
        case 3: {
            cout << "Escreve o número hexadecimal (0-9 e A-F).";
            string hexb;
            cin >> hexb;

            for (int u = 0; u < hexb.size(); u++) {

                if (hexb[u] >= '0' && hexb[u] <= '9') {
                    int num = hexb[u] - '0';
                    cout << hexall[num];
                }
                else if (hexb[u] >= 'A' && hexb[u] <= 'F') {
                    int num = hexb[u] - 'A' + 10;
                    cout << hexall[num];
                }
                else {
                    cout << "\nErro: número/letra incorreto: " << hexb[u] << "\n";
                }
            }

            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;
        }

        case 4:
            cout << "Escreve o número binario!\n";
            cout << "Quantos binario tem?";
            cin >> ol;
            cout << "Escrevo o codigo binario entre espaços.";
            for (int h = 0; h < ol; h++) {
                cin >> dech[h];
            }
            for (int n = 0; n < ol; n++) {
                for (int k = 0; k < 17; k++) {
                    if (dech[n] == hexall[k]) {
                        if (k < 10) {
                            cout << hexNumeros[k];
                        }
                        else {
                            cout << hexLetras[k - 10];
                        }
                    }
                }
            }
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;
        case 5:
            cout << "----------------------------\n";
            cout << "1.0\n";
            cout << "----------------------------\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;
        case 6:
            break;
        default:
            cout << "Erro,tente outra vez!";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            system("cls");
            break;


        }
    } while (Escolha != 6);
    return 0;
}