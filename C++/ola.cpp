#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num,num2;
int b;
	cout << "Escreva o 1º número \n";
		cin >> num;
	cout << "Escreva o 2º número \n";
		cin >> num2;
		cout << "Quer Somar,Dividir,Multiplicar ou Subtrair(1,2,3,4)";
			cin >> b;
			switch (b) {
			case 1:
				cout << "O total é " << num + num2 << ".";
				break;
			case 2:
				cout << "O total é " << num/num2 << ".";
				break;
			case 3:
				cout << "O total é " << num*num2 << ".";
				break;
			case 4:
				cout << "O total é " << num-num2 << ".";
				break;
			}
	return 0;
}