#include <iostream> 
#include <cstring> 
#include <string>
#include <locale> 
#include <cctype>   
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    char NomeP[10000];
    int i = -1, po;
    char Maisculas[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' }, minusculas[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    do {
        i++;
        cin >> NomeP[i];
    } while (NomeP[i] != '.');
    for (int u = 0; u < i; u++) {
        for (int l = 0; l < 26; l++) {
            if (NomeP[u] == Maisculas[l]) {
                cout << NomeP[u];
                u += 1;
                break;
            }
        }
        do {
            po = 0;
            for (int j = 0; j < 26; j++) {

                if (NomeP[u] == minusculas[j]) {
                    cout << NomeP[u];
                    u += 1;
                    po++;
                    break;
                }
            }
        } while (po != 0);
        if (isdigit(NomeP[u])) {
            cout << "\t" << NomeP[u];
            u += 1;
            while (isdigit(NomeP[u])) {
                if (isdigit(NomeP[u])) {
                    cout << NomeP[u];
                    u += 1;
                }
            }
        }
        else {
            cout << "\t 1";
        }
        for (int y = 0; y < 26; y++) {
            if (NomeP[u] == Maisculas[y]) {
                cout << "\n";

                break;
            }
        }
        u -= 1;




    }
    return 0;
}

