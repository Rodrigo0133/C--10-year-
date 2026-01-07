#include <iostream>
#include <locale.h>
using namespace std;

float media(int n[]) {
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += n[i];
    }
    soma / 10;
    return soma;
}

int menor(int n[]) {
    int m = n[0];
    for (int i = 1; i < 10; i++) {
        if (n[i] < m) {
            m = n[i];
        }
    }
    return m;
}


int maior(int n[]) {
    int m = n[0];
    for (int i = 1; i < 10; i++) {
        if (n[i] > m) {
            m = n[i];
        }
    }
    return m;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int Escolha, numero[10], nalor = 0, b = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Diga o " << i + 1 << " º Número - ";
        cin >> numero[i];
        system("cls");
    }
    do {
        system("cls");
        cout << "\nDesennolnedor - Rodrigo Galante\n";
        cout << "----------------------------\n";
        cout << " [1] Calcular a média dos números \n [2] Achar o menor \n [3] Achar o maior\n [0] Sair\n";
        cout << "----------------------------\n";
        cin >> Escolha;
        system("cls");
        switch (Escolha) {
        case 1:
            cout << "Media : " << media(numero);
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            break;
        case 2:
            cout << "Menor : " << menor(numero);
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            break;
        case 3:
            cout << "Maior : " << maior(numero);
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
            break;
        case 0 :
            break;
        default:
            cout << "incorreto seu burro!";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.ignore();
            cin.get();
        }
    } while (Escolha != 0);
}