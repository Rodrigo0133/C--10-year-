
#include <iostream>

using namespace std;
void devolver(int TMoedas[], int troco,int c[]) {
    for (int i = 0; i < 8; i++) {
        TMoedas[i] = troco / c[i];
        troco %= c[i];
    }
    for (int i = 0; i < 8; i++) {
        if (i) cout << " ";
        cout << TMoedas[i];
    }
}
void devolver_neg(int Moeda[8]) {
    for (int i = 0; i < 8; i++) {
        if (i) cout << " ";
        cout << Moeda[i];
    }
}

    void main(){
	// pac = pagamento a contar em centimos, prc = preco a contar em centimos
    int Euros, Centimos,Moeda[8],TMoedas[8] = {0}, prc, pac = 0;
    int c[8] = {200, 100, 50, 20, 10, 5, 2, 1};

	cin >> Euros >> Centimos;
    for (int i = 0; i < 8; i++) {
        cin >> Moeda[i];
    }

    prc = Euros * 100 + Centimos;
    for (int i = 0; i < 8; i++) {
        pac += Moeda[i] * c[i];
    }

    if (pac >= prc) {
        int troco = pac - prc;
		devolver(TMoedas, troco,c);
    } else {
		devolver_neg(Moeda);
    }
}