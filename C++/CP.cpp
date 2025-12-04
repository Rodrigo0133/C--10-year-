#include <iostream> 
#include <cstdlib> 
#include <time.h> 
#include <locale.h> 
#include <string> 
using namespace std; 
int main() { 
	setlocale(LC_ALL, "Portuguese"); 
	srand(time(0)); 
	
	int dias, valor, pessoas; 
	cin >> valor >> dias >> pessoas;
	valor = valor - (valor * 0.25);
	while (valor % 50 != 0) {
		valor++;
	}

	if (dias >= 5 && dias < 8) {
		valor = valor - (valor * 0.40); 
		while (valor % 50 != 0) {
			valor++;
		}

	} 
	if (dias >= 8) {
		valor = valor - (valor * 0.65); 
		while (valor % 50 != 0) {
			valor++;
		}
	}
	if (pessoas >= 4)
	{ valor = valor - (valor * 0.50);
	while (valor % 50 != 0) {
		valor++;
	}

	}
	cout << valor;
