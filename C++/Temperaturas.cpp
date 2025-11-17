#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, temp[12], all = 0;
	string Mês[12] = { "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro" };
	for (i = 0; i < 12; i++) {
		cout << "Escreva a temperatura media de " << Mês[i] << "\n";
		cin >> temp[i];
		all = temp[i] + all;
	}
	all = all / 12;
	cout << " A média anual é " << all << "\n";
	for (i = 0; i < 12; i++) {
		if (temp[i] > all) {
			cout << "O mês de " << Mês[i] << " passou da média " << temp[i]<< "\n";
		}
	}
	
}