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
	int num, Tentativa;
		num = rand() % 99 + 1;
	do {
		cout << "Diga um número\n";
			cin >> Tentativa;
			if (Tentativa < num) {
				cout << "O número está acima\n";
			}
			if (Tentativa > num) {
				cout << "O número está abaixo\n";
			}
	} while (Tentativa != num);
	cout << "O número está Certo \n";

	return 0;
}
