#include <string>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Portuguese");
	int A;
	char Sair = 'n';
	string nam[5] = {};
	string nom[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cout << "Qual � a namorda #" << i  << "\n";
		cin >> nam[i];
	}
		for (int j = 0; j < 5; j++)
		{
		cout << "Qual � o nome fofo da namorda #" << j << "\n";
		cin >> nom[j];

	}
	do {
		
		cout << "Qual � o n�mero da namorada vais ficar hoje? \n";
		cin >> A;
		if (A < 5 && A > 0) {
			cout << "O nome da Namorada � " << nam[A] << " o nome fofinho dela � " << nom[A] << " . \n";
		}
		else {
			break;
		}
			cout << "Queres sair ? (s/n)\n";
			cin >> Sair;
		

	} while (Sair != 's');
	return 0;
}