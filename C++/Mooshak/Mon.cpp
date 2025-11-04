#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,maior=0,C=0,A,i;
    cin >> N;

    for ( i = 0; i < N; ++i) {
        cin >> A[i];
    }for ( i = 0; i < N; ++i) {
        if (A[i] > maior) {
          C++;
            maior = A[i];
        }}
    cout << C;
    return 0;
}
