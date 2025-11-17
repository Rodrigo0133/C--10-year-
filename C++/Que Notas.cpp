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
	float media[3], nota[3];
    string disciplina[3];
    for(i=0;i<3;i++){
        cout<< "Escreva o nome da " << i+1 << "º disciplina \n";
         cin >> disciplina[i];
         for(int j = 0;j<3;j++){
            cout << "Escreva a nota do "<< j+1 << "º aluno/a a " << disciplina[i] << "\n"; 
            cin>>nota[j];
            media[i] = nota[j] + media[i];
         }
         media[i] = media[i]/3;
    }
 for(i=0;i<3;i++){
 cout << "A media de " << disciplina[i] << " é " << media[i]<< "\n";
 }
	return 0;
}