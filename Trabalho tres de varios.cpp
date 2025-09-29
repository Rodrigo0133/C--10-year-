/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    int kmi,kmf,lg,kmh;
    std::cout << "Escreva os kilometros iniciais: ";
    std::cin >> kmi;
    std::cout << "Escreva os kilometros finais: ";
    std::cin >> kmf;
    std::cout << "Escreva os litros de gasolina gastos: ";
    std::cin >> lg;
    kmh = (100*lg)/(kmf-kmi);
    std::cout << "O seu automovel gasta " << kmh << ".";
}