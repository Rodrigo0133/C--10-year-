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
	float nump[10],numa[10],imc[10];
	int i,e,a,t=0;
	
	for (i = 0; i < 10; i++) {
		cout << "Escreva a altura da " << i + 1 << " pessoa\n";
		cin >> numa[i];
		cout << "Escreva a peso da " << i + 1 << " pessoa\n";
		cin >> nump[i];
	}
	do {
		cout << "Diga oque queres 0-Sair 1- Dizer o peso e altura das 10 pessoas 2-saber o imc de uma certa pessoa 3-media do imc";
		cin >> a;
		switch (a) {
		case 1:
			for (i = 0; i < 10; i++) {
				cout << "O pesso da " << i + 1 << " é " << nump[i] << "e a altura é " << numa[i] << "\n";
			}
			break;
		case 2:
			cout << "Qual é a pessoa que queres saber o imc?\n";
			cin >> e;
			cout << "O IMC da pessoa " << e << " é " << nump[e - 1] / (numa[e - 1] * numa[e - 1]);
			break;
		case 3:
			for (i = 0; i < 10; i++) {
				imc[i] = nump[i] / (numa[i] * numa[i]);
				t += imc[i];
			}
			cout << "A media é " << t / 10;
			break;
		case 0:
			break;

		default :
			cout << "Está mal o número\n";

		}
	} while (a != 0);
	return 0;
}