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
	int num[3][5],num2[3][5],i,j,totalm[3][5], totalr[3][5],Escolha,o;
	do {
		cout << "Desenvolvedor: Rodrigo Galante\n";
		cout << "-----------------------------------------\n";
		cout << "[1] Calcular arrays de quadrados\n[2] Sair\n";
		cin >> Escolha;
		system("cls");
		if (Escolha == 1) {
			for (i = 0; i < 3; i++) {
				cout << "\nEscreve 2 números para o " << i + 1 << " linha do 1 quadrado \n";
				for (j = 0; j < 5; j++) {
					cin >> num[i][j];
				}
			}
			for (i = 0; i < 3; i++) {
				cout << "\nEscreve 2 números para o " << i + 1 << " linha do 2 quadrado \n";
				for (j = 0; j < 5; j++) {
					cin >> num2[i][j];
					totalm[i][j] = num[i][j] + num2[i][j];
					totalr[i][j] = num[i][j] - num2[i][j];
				}
			}
			system("cls");
			cout << "[1] Somar\n[2] Subtrair";
			cin >> o;
			if (o == 1) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 5; j++) {
						cout << totalm[i][j] << " ";
					}
					cout << "\n";
				}
			}
			else {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 5; j++) {
						cout << totalr[i][j] << " ";
					}
					cout << "\n";
				}
			}
				cout << "\n\nPrima ENTER para voltar ao menu.";
				cin.ignore();
				cin.get();
				system("cls");
			
		}
		
	} while (Escolha != 2);
	return 0;
}