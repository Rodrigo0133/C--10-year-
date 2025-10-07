#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	do {
		cout << "Escreve um número ";
		cin >> N;
		if (N == 0) {
			break;
		}
		if (N % 5 == 0 && N % 3 == 0) {
			cout << "O número é múltiplo de 3 e 5 \n";
		}
		if (N % 5 == 0) {
			cout << "O número é múltiplo de 5 \n";
		}
		else {
			if (N % 3 == 0) {
				cout << "O número é múltiplo de 3 \n";

			}
			else {
				cout << "O número não é múltiplo de 3 e 5 \n";
			}
		}
	} while (N != 0);

	return 0;
}
	
