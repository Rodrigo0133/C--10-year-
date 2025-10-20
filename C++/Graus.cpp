#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float resultado;
	int Valor;
	char Escolha;
		cout << "Escolha entre Graus celcios (c) ou  fahrenheit(f)";
	cin >> Escolha;
		cout << "qual o valor";
	cin >> Valor;
	if (Escolha == 'c' || 'C')
	{
		resultado = (Valor * 1.8) + 32;
		cout << "Os fahrenheit é " << resultado << " .";
	}
	else {
		resultado = (Valor - 32) / 1.8;
			cout << "Os Graus Celsius  é " << resultado << " .";
	}
	
		return 0;

		
}