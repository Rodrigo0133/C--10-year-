#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double CS = 1, CB = 0.8, CR = 1.5, CC = 0.6, S, B, R, C, Lucro, VS, VB, VR, VC;
	cout << "Escreva as Quantidades das Sandes ";
	cin >> S;
	cout << "Preço que vendeu as Sandes ";
	cin >> VS;
	cout << "Escreva as Quantidades dos Bolos ";
	cin >> B;
	cout << "Preço que vendeu os Bolos ";
	cin >> VB;
	cout << "Escreva as Quantidades dos Refrigerantes ";
	cin >> R;
	cout << "Preço que vendeu os Refrigerantes ";
	cin >> VR;
	cout << "Escreva as Quantidades do café ";
	cin >> C;
	cout << "Preço que vendeu o café ";
	cin >> VC;
	Lucro = ((VS - CS) * S) + ((VB - CB) * B) + ((VR - CR) * R) + ((VC - CC) * C);
	cout << "O lucro foi " << Lucro << ".";

	





}