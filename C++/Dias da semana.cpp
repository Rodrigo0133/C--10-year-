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
	int N;
	cout<< "Escreva um número \n";
	cin>>N;
	
	if (N<1 && N>7){
	    cout<< "erro \n";
	} else {
	     switch (N) {
            case 1:
                cout << "Segunda-feira";
                break;
            case 2:
                cout << "Terça-feira";
                break;
            case 3:
                cout << "Quarta-feira"; 
                break;
            case 4:
                cout << "Quinta-feira"; 
                break;
            case 5:
                cout << "Sexta-feira"; 
                break;
            case 6:
                cout << "Sabado";
                break;
            case 7:
                cout << "Domingo";
	}
	}
    return 0;
}
	
	