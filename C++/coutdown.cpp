#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	cout << "Diga um n�mero \n";
		cin >> n;
		if (n < 0) {
			cout << "Escreveste um n�mero invalido, seu idiota! \n";
			
		} else {
			for (int i = 0; i <= n; i++) {
				cout << "A contagem esta em " << n - i << "\n";
			}
			cout << "Chegou ao fim do contador.";
		}
		
	return 0;
}