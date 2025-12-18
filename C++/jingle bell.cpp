#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <string>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "Portuguese");
	int total[3]= {0}, quantidades[3][3] = {0}, total2[3] = {0}, totalfinal = 0;
	string nomes[3] = { "Rodrigo","Manuel","Joaquim"}, prendas[3] = { "Iphone","Pc","Ps5" };
	for (int i = 0; i < 3; i++) {
		for (int ii = 0; ii < 3; ii++) {
			cout << " quantos " << prendas[ii] << " quer para o " << nomes[i];
			cin >> quantidades[i][ii];
			total[i] += quantidades[i][ii];
			total2[i] += quantidades[ii][i];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int ii = 0; ii < 3; ii++) {
			cout << "O " <<nomes[i]<<" teve o total de "<< total[ii]<< " de "<< prendas[i]<<"" << endl;
			cout << "O produto " << prendas[ii] << " teve o total de " << total2[i] << "\n";

 
			total[i] += quantidades[i][ii];
		} 
	}  
	for (int i = 0; i < 3; i++) {
		totalfinal = total[i] + total2[i];
	}
	cout << "o total de tudo foi " <<totalfinal;
	return 0;
}
