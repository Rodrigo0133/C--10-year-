#include <iostream>
#include <time.h>
#include <cstdlib>
#include <locale.h>
using namespace std;

int deposit() {
    int quantidade;
    system("cls");
    cout << "Digite o valor para depósito: ";
    cin >> quantidade;
    quantidade;
    cout << "Depósito de " << quantidade << " realizado com sucesso.\n";
    cout << "\n\nPara voltar ao inicio clique ENTER";
    cin.get();
    cin.get();
    system("cls");
    return quantidade;
}
int debit(int saldo) {
    int quantidade,numero_aleatorio;
	bool sucesso = false;
    do {
        system("cls");
        cout << "Digite o valor para débito: ";
        cin >> quantidade;
        if (saldo < quantidade) {
            cout << "Saldo insuficiente para débito de " << quantidade << ".\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            sucesso = false;
        }
        else {
            if (quantidade >= 2000){
                numero_aleatorio = (rand() % 4);
                switch(numero_aleatorio){
                    case 0:
                        cout << "Uau! Ainda vais preso!\n";
                        cout << "\n\nPara voltar ao inicio clique ENTER";
                        cin.get();
                        cin.get();
                        system("cls");
                        break;
                    case 1:
                        cout << "A nadar em dinheiro, ahn?\n";
                        cout << "\n\nPara voltar ao inicio clique ENTER";
                        cin.get();
                        cin.get();
                        system("cls");
                        break;
                    case 2:
                        cout << "Cuidado para não afundares o banco com tanto dinheiro!\n";
                        cout << "\n\nPara voltar ao inicio clique ENTER";
                        cin.get();
                        cin.get();
                        system("cls");
                        break;
                    case 3:
                        cout << "Já vi que finalmente tomaste banho e foste a casa da madrinha\n";
                        cout << "\n\nPara voltar ao inicio clique ENTER";
                        cin.get();
                        cin.get();
                        system("cls");
                        break;
				}

            }
            cout << "Débito de " << quantidade << " realizado com sucesso.\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            sucesso = true;
			return quantidade;
        }
        
	} while (!sucesso);
}
int enviarDinheiro(int saldo) {
    int quantidade;
    bool sucesso = false;
    do {
        system("cls");
        cout << "Digite o valor para enviar: ";
        cin >> quantidade;
        if (saldo < quantidade) {
            cout << "Saldo insuficiente para enviar " << quantidade << ".\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            sucesso = false;
        }
        else {
            cout << "Envio de " << quantidade << " realizado com sucesso.\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            sucesso = true;
            return quantidade;
        }
        
    } while (!sucesso);
}
void menu() {
    int Opcao, saldo = 1000, auxiliar;
    do {
        system("cls");
        cout << "\nDesenvolvedor - Rodrigo Galante\n";
        cout << "----------------------------\n";
        cout << " [1] Deposito \n [2] Débito \n [3] Verificar Saldo \n [4] Enviar Dinheiro \n [0] Sair \n";
        cout << "----------------------------\n";
        cin >> Opcao;
        switch (Opcao) {
        case 1:
            saldo += deposit();
            cout << "Novo saldo: " << saldo << "\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 2:
            saldo -= debit(saldo);
            cout << "Novo saldo: " << saldo << "\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            break;
        case 3:
            cout << "O saldo atual é: " << saldo << "\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");

            break;
        case 4:
            saldo -= enviarDinheiro(saldo);

            break;
        case 0:
            cout << "A Sair do programa\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
            break;
        default:
            cout << "Opção inválida. Tente novamente.\n";
            cout << "\n\nPara voltar ao inicio clique ENTER";
            cin.get();
            cin.get();
            system("cls");
        }
    } while (Opcao != 0);
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    menu();
	return 0;
}