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
    int i, cont = 0, j;
    float media[10], nota[10], Maior[10];
    string nomes[10] = { "António","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" };

    string disciplinas[10] = { "Portugues","Ingles","Fisica","TLP","TIC","Matemática","ACS","Filosofia","Quimica","Ed.Fis." };
    for (i = 0; i < 10; i++) {
        Maior[i] = 0;
        media[i] = 0;
        for (j = 0; j < 10; j++) {
            cout << "Escreva a nota do/a " << nomes[j] << " a " << disciplinas[i] << "\n";
            cin >> nota[j];
            if (Maior[i] < nota[j]) {
                Maior[i] = nota[j];
            }
            media[i] = nota[j] + media[i];
        }
        
    }
    for (i = 0; i < 10; i++) {
        media[i] = media[i] / 10;
        for (j = 0; j < 10; j++) {
            if (Maior[i] == nota[j]) {
                cout << "A media de " << disciplinas[i] << " é " << media[i] << ", A maior nota foi " << Maior[i] << " do/a aluno/a " << nomes[j] << "\n";
            }
        }
    }
    return 0;
}
