#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N;
	
	cout<<"Escreva um número\n";
	cin>>N;
	if (N<0) {
	    cout<<"Meteste água. Aguarda Processo de Secagem\n";
	} else {
	    if (N<18){
	        cout<<"Puto\n";
	} else {
	    if (N<66) {
	       cout<<"Adulto\n"; 
	    } else {
	        if(N<150) {
	            cout<<"Velinho\n"; 
	            
	        } else {
	            cout<<"Dinossaro\n"; 
	        }
	    }
	    
	}
	}
	return 0;
}