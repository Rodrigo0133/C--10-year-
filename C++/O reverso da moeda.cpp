/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num,i;
	string nom[5];
	char sair='n';
	do {
	for (i=0;i<=4;i++){
	    cout<<"Qual é o " << i+1 << "º nome \n";
	    cin >> nom[i];
	}
	for(i=4;i>=0;i--)
	{
	    cout <<nom[i]<< "\n";
	}
	cout << "Queres Sair? (s/n)";
	cin >> sair;
	}while(sair!='s');

	return 0;
}