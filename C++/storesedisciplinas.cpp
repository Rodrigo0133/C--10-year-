#include <string>
#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	int S;
		setlocale(LC_ALL, "Portuguese");
	string disc[9] = { "mat", "Por", "TLP", "Ing", "Tic", "Edf", "Ai", "ACSO", "FQ", };
	string prof[9] = { "Jo�o", "Rodrigo", "Clara", "Brun�o", "Clara", "Ana","�Carla", "Cristiano Ronaldo", "Andr� aventura" };
	do {
		cout << " \n Qual � o n�mero da mat�ria queres saber? \n";
			cin >> S;
			cout << "\n A mat�ria � " << disc[S] << " e o professor � " << prof[S] << " .\n";

	} while (S != 0);
		return 0;
}