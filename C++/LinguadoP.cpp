#include <iostream> 
#include <cstring> 
#include <string>
#include <locale> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    char NomeP[50];
    int i = -1;
    cout << "Diga a palavra que quer traduzir para Lingua P" << " ";
    do {
        i++;
        cin >> NomeP[i];
    } while (NomeP[i] != '!');
    for (int u = 0; u < i; u++) {
        cout << NomeP[u];
        switch (NomeP[u]) {
        case 'a': cout << 'pa';
            break;
        case 'e': cout << 'pe';
            break;
        case 'i': cout << 'pi';
            break;
        case 'o': cout << 'po';
            break;
        case 'u': cout << 'po';
            break;
        }
    }
    return 0;

}