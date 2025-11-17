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
	int i;
	float media[10], nota[10];
	string nomes[10] = { "António","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" };

string disciplinas[10] = {"Portugues","Ingles","Fisica","TLP","TIC","Matemática","ACS","Filosofia","Quimica","Ed.Fis." };
    for(i=0;i<10;i++){
         for(int j = 0;j<10;j++){
            cout << "Escreva a nota do/a "<< nomes[j] << " a " << disciplinas[i] << "\n"; 
            cin>>nota[j];
            media[i] = nota[j] + media[i];
         }
         media[i] = media[i]/3;
    }
 for(i=0;i<10;i++){
 cout << "A media de " << disciplinas[i] << " é " << media[i]<< "\n";
 }
	return 0;
}