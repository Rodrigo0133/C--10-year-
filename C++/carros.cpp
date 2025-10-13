#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int r;

	string carros[3] = { "Volvo", "BMW", "Mercedes" };

	char Sair='n';
	do {
		cout << "Escolhe um número de carro (0 a 2) \n";
		cin >> r;
		if (r < 0 || r>2) {
			cout << "Esse número não existe, seu idiota! \n"; 
		}
		else {
			cout << "\n O número do carro é " << r << "e o carro é " << carros[r] << " .\n";
		}
		cout << "Deseja sair? (n/s) \n";
		cin >> Sair;
		}while (Sair != 's');
	return 0;
	   }



	