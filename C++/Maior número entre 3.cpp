/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    double n1,n2,n3;
    std::cout<<"Escreva o primeiro número ";
    std::cin >> n1;
    std::cout<<"Escreva o segundo número ";
    std::cin >> n2;
    std::cout<<"Escreva o terceiro número ";
    std::cin >> n3;
    if (n1>n2 && n1>n3) {
    std::cout << "O " << n1 << " É o maior número" ;
    } else {
        if (n3>n2 && n3>n1){
        std::cout << "O " << n3 << " É o maior número";
        } else {
            std::cout << "O " << n2 << " É o maior número" ;
    }}
    
    
    return 0;
}