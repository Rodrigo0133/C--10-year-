#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int r;

	string carros[4] = { "Português", "Matematica", "Inglês", "TLP" };

	char Sair = 'n';
	do {
		cout << "Escolhe um número da materia (0 a 3) \n";
		cin >> r;
		if (r < 0 || r>3) {
			cout << "Esse número não existe, seu idiota! \n";
		}
		else {
			cout << "\n O número da materia é " << r << " e a materia é " << carros[r] << " .\n";
		}
		cout << "Deseja sair? (n/s) \n";
		cin >> Sair;
	} while (Sair != 's');
	return 0;
}
