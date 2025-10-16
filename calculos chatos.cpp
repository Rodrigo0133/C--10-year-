#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num[10], Totaln = 0, totalp = 0, contagemn = 0, contagemp = 0, i, j;
	char Soma = 'n', cont = 'n', Soman = 'n', contn = 'n';

	for (i = 0; i <=9; i++) {
		cout << "Escreva o " << i << "# numero";
		cin >> num[i];

	} for (j = 0; j <10; j++) {

		if (num[j] >= 0)
		{
			contagemp = contagemp + 1;
			totalp = num[j] + totalp;
		}
		else {
			contagemn = contagemn + 1;
			Totaln = num[j] + Totaln;
		}
	}
	cout << "queres saber a quantidade de negativos? (s/n) \n";
	cin >> contn;
	if (contn == 's') {
		cout << "A contagem é " << contagemn << ".";
	}
	cout << "queres saber a quantidade de positivos? (s/n) \n";
	cin >> cont;
	if (cont == 's') {
		cout << "A contagem é " << contagemp << ".";
	}
	cout << "queres saber a soma dos negativos? (s/n) \n";
	cin >> Soman;
	if (Soman == 's') {
		cout << "A soma é " << Totaln << "";
	}
	cout << "queres saber a soma dos positivos? (s/n) \n";
	cin >> Soma;
	if (Soma == 's') {
		cout << "A soma é " << totalp << ".";

		return 0;
	}
}

		