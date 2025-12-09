#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int Valor[5][12], k, n, j, total = 0;
    string Nomes[5], meses[12] = { "Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro" };
    int i = 0;

    do {
        system("cls");
        cout << "--------------------------\n[1] Calcular totais mensais\n[2] Calcular totais por produto\n[3] Inserir Produtos\n[0] Sair\n--------------------------\n";
        std::cin >> k;

        switch (k) {

            
        case 1: {
            int pp;   

            system("cls");
            if (i == 0) {
                cout << "ERRO não tens nenhum produto, maluco!!";
                cout << "\n\nPara voltar ao inicio clique ENTER";
                std::cin.get();
                std::cin.get();
                system("cls");
                break;
            }

            do {
                system("cls");
                cout << "--------------------------\n[1] Calcular todo num dado mês\n[0] Sair\n--------------------------\n";
                std::cin >> pp;

                switch (pp) {

                case 1: {
                    system("cls");
                    total = 0;

                    int p;   

                    cout << "queres saber que mês?";
                    std::cin >> p;

                    for (int j = 0; j <= i; j++) {
                        total += Valor[j][p];
                    }

                    system("cls");
                    cout << "O total do mês " << Nomes[p] << " é " << total;
                    cout << "\n\nPara voltar ao inicio clique ENTER";
                    std::cin.get();
                    std::cin.get();
                    break;
                }

                case 0:
                    break;

                default:
                    system("cls");
                    cout << "Erro, tente outra vez!\n";
                    std::cin.ignore();
                    std::cin.get();
                    system("cls");
                    break;
                }

            } while (pp != 0);

            break;
        }

            
        case 2: {

            if (i == 0) {
                system("cls");
                cout << "ERRO não tens nenhum produto, maluco!!";
                cout << "\n\nPara voltar ao inicio clique ENTER";
                std::cin.get();
                std::cin.get();
                system("cls");
                break;
            }

            int l, ll;  

            do {
                total = 0;
                system("cls");
                cout << "--------------------------\n[1] Saber o valor do produto no ano\n[0] Sair\n--------------------------\n";
                std::cin >> l;

                switch (l) {

                case 1:
                    system("cls");
                    cout << "Qual produto? (" << 1 << " á " << i << ")\n";
                    std::cin >> ll;

                    if (ll > i || ll < 1) {
                        cout << "ERRO não existe nenhum produto, maluco!!";
                        cout << "\n\nPara voltar ao inicio clique ENTER";
                        std::cin.get();
                        std::cin.get();
                        system("cls");
                        break;
                    }

                    for (int j = 0; j < 12; j++) {
                        total += Valor[ll][j];
                    }

                    system("cls");
                    cout << "O total no ano foi de " << total;
                    break;

                case 0:
                    break;

                default:
                    cout << "Erro, tente outra vez!\n";
                    std::cin.ignore();
                    std::cin.get();
                    system("cls");
                    break;
                }

            } while (l != 0);

            break;
        }

              
        case 3: {
            int p;   

            do {
                system("cls");
                cout << "--------------------------\n[1] Inserir Valor\n[0] Sair\n--------------------------\n";
                std::cin >> p;

                switch (p) {

                case 1:
                    system("cls");
                    cout << "Nome do produto?\n";
                    std::cin >> Nomes[i];

                    for (int j = 0; j < 12; j++) {
                        system("cls");
                        cout << "Valor de " << Nomes[i] << " no Mês de " << meses[j] << "\n";
                        std::cin >> Valor[i][j];
                    }

                    i++;

                    cout << "\n\nPara voltar ao inicio clique ENTER";
                    std::cin.get();
                    std::cin.get();
                    system("cls");
                    break;

                case 0:
                    break;

                default:
                    cout << "Erro, tente outra vez!\n";
                    std::cin.ignore();
                    std::cin.get();
                    system("cls");
                    break;
                }

            } while (p != 0);

            break;
        }

        case 0:
            break;

        default:
            cout << "Erro, tente outra vez!\n";
            std::cin.ignore();
            std::cin.get();
            system("cls");
            break;
        }

    } while (k != 0);
}
