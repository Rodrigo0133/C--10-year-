#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

double conta(double Valortotal, int Pessoas) {
	double Valorporpessoa = Valortotal / Pessoas;
	return Valorporpessoa;

}

int main() {
	setlocale(LC_ALL, "Portuguese");
	double Valortotal,Valorporpessoa;
	int Pessoas;
	cout << "Qual foi o valor da despesa no total?\n";
	cin >> Valortotal;
	cout << "Quantas pessoas são?\n";
	cin >> Pessoas;
	Valorporpessoa = conta(Valortotal, Pessoas);
	cout << "\nO valor para cada pessoa é" << Valorporpessoa << " $";

}

