#include <iostream>
#include <string>
using namespace std;
int main() {
	int A, B, M, m, D, baixo = 0, alto = 0, adequado = 0, g;
	string linha;
	cin >> m >> M >> A >> B >> D;
	cin.ignore();
	for (int i = 0; i < D; i++) {
		g = 0;
		getline(cin, linha);
		for (char c : linha) {
			if (c == '1')g++;
		}
		if (g < m) baixo++;
		else if (g > M) alto++;
		else if (g >= A && g <= B)	adequado++;
	}
	cout << baixo << " " << alto << " " << adequado;
}