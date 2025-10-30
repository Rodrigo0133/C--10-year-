#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1[10], num2[10], num3[20], i, j = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "insira o " << i + 1 << "º número do primeiro vetor: ";
        cin >> num1[i];
        cout << "insira o " << i + 1 << "º número do segundo vetor: ";
        cin >> num2[i];
    }
    for ( i = 0; i < 10; i++)
    {
        num3[j++] = num1[i];
        num3[j++] = num2[i];
    }
    for (int i = 0; i < 20; i++)
    {
        cout << num3[i] << " ";
    }

    return 0;
}