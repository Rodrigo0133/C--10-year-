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
	 float n;
    cout << "Digite a nota do aluno\n ";
    cin >> n;
    if (n > 9.5) {
        cout << "O aluno está aprovado.";
    } else {
        cout << "O aluno está reprovado.";
    }

    return 0;
}