/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");
    int numero = 0;
    do {
        
     cout << "Escreva um numero\n";
     cin >> numero;
        if (numero == 0) {

        }
        else{ if (numero % 2 == 0) {
     cout << "O numero e par\n";
        }
        else {
       cout << "Nao e impar\n";
        }
        }
    } while (numero != 0);

    return 0;
}