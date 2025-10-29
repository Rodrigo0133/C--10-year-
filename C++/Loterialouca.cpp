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
	int i, num[5], n,Cont = 0,aux300,aux,j,Cont1;
	do{
	    Cont1 = 0;
	for (i = 0; i <= 5; i++) {
		num[i] =(rand() % 6) + 1;
	 for (j = 0; j < i; j++) {
	    if(num[j] == num[i]){
	        Cont1++;
		}}}
	    }while(Cont1!=0);
	for (i=1;i<=5;i++){
		cout << "Escreve número de 1 a 50\n";
		cin >> n;
		if (n > 50) {
			cout << "Escreveste um número alto, seu boneco, é entre 1 a 50\n";
			i--;
		}if (n <= 0) {
			cout << "Escreveste um número baixo, seu boneco, é entre 1 a 50 \n";
			i--;
		}
for (j = 0; j <= 5; j++) {
	    if(n == num[j]){
	        Cont++;
		}}}
		do {
		aux300 = 0;
		for (i = 0; i < 5; i++) {
			if (num[i] > num[i + 1]) {
				aux = num[i];
				num[i] = num[i + 1];
				num[i + 1] = aux;
				aux300++;
			}}
	} while (aux300 != 0);
	
	for (i = 0; i < 5; i++) {
		cout  << num[i] << "\n";
	}
	if(Cont==5){
	cout << "BRAVO, GANHASTE 1MILHÃ O DE BITCOIN";
	} else {
	    cout<< "Parábens,acertaste  " << Cont << ".";
	}
	return 0;
}
