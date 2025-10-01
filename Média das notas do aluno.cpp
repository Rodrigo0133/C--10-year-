/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
   double mat,pt,ing,fq,media;
    std::cout << "Escrever a nota de Matematica ";
    std::cin >> mat;
    std::cout << "Escrever a nota de Portugues ";
    std::cin >> pt;
    std::cout << "Escrever a nota de Ingles ";
    std::cin >> ing;
    std::cout << "Escrever a nota de fisica ou quimica ";
    std::cin >> fq;
    media = (mat+pt+ing+fq)/4;
    std::cout << "A media das notas é " << media <<".";
    
    return 0;
}

    