#include <iostream>
#include <string>
using namespace std;
int main() {
    string name[3] = { "Rodrigo","Carla","Joaquin" }, prendas[3] = { "Ps5","Pc","Xbox" };
    int quantidade[3][3] = {}, total[3] = { 0,0,0 }, total2[3] = { 0,0,0 };

    for (int i = 0; i < 3; i++) {
        for (int ii = 0; ii < 3; ii++) {
            cout << "Quantos presentes para " << name[i] << " de " << prendas[ii] << ": ";
            cin >> quantidade[i][ii];
            total[i] += quantidade[i][ii];
            total2[ii] += quantidade[i][ii]; 
        }
    }

    system("cls");
    for (int i = 0; i < 3; i++) {
        cout << "O total de " << name[i] << " foi de " << total[i] << '\n';
    }
    for (int i = 0; i < 3; i++) {
        cout << "O total de " << prendas[i] << " foi de " << total2[i] << '\n';         
    }
    return 0;
}