#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, maior = -2147483647, menor = 2147483647;
	do {
		cout << "Escreva ai um n�mero\n";
		cin >> num;
			if (num>maior) {
				maior = num;
			} if (menor>num && num != 0) {
				menor = num;
			}
	} while (num != 0);
	cout << "\n O maior n�mero �: " << maior << " e o menor � " << menor << ".";
	return 0;
}