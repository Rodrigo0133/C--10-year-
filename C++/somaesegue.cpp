#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num,Soma,b;
	Soma = 0;
		cout << "Quantos n�meros uma pessoa quer somar? ";
		cin >> b;
		for (i = 1; i <= b; i++) {
			cout << "qual n�mero quer somar? ";
				cin >> num;
				Soma = Soma + num;
		}
		cout << "O Resultado final � " << Soma << " .";
	return 0;
}