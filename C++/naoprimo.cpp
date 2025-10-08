
#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "Portuguese");

	int contador = 0;
	int numero = 2;
	std::cout << "diga um numero\n";
	std::cin >> numero;


	for (int i = 1; i <= numero; i++) {

		if (numero % i == 0) {
			contador++;
		}

	}
	if (contador == 2) {
		std::cout << "Numero e primo";
	}
	else {
		std::cout << "O numero nao e primo";
	}

}