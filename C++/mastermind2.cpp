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
	int i, num[4], num2[4], cont, cont2 = 0;
	for (i = 0; i < 4; i++) {
		num[i] = rand() % 2;
	}
	do {
		cont2++;
		cont = 0;
		for (i = 0; i < 4; i++) {
			
			cout << "diga ai o seu codigo ";
			cin >> num2[i];
			if (num2[i] == num[i]) {
				cont++;
			}
		}
		cout << "acertaste " << cont << "\n";
	} while (cont != 4);
	cout << "Demoraste " << cont2 << " vezes\n";
	return 0;


}
