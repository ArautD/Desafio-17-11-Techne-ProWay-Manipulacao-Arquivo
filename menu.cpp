#include "menu.h"
#include <iostream>

using namespace std;

void exibeMenu(){
    int opcao;

do{
    system("cls");
    std::cout << "\n=============== Menu de Seleção ===============\n";
    std::cout << "Verficiar quantas linhas tem no arquivo" << std::endl;
    std::cout << "Contar quantas palavras tem no arquivo" << std::endl;
    std::cout << "Encontrar uma palavra" << std::endl;
    std::cout << "Exibir maior e menor número" << std::endl;
    std::cout << "Trocar CACHORRO por MINGAU" << std::endl;
    std::cin >> opcao;

    switch (opcao){
        case 1:
        system("pause");
        break;
        case 2:
        system("pause");
        break;
        case 3:
        system("pause");
        break;
        case 4:
        system("pause");
        break;
        case 5: 
        system("pause");
        break;
        case 0:
        system("cls");
        cout << "Saindo...\n"; break;
        default: cout << "Opção inválida! \n"; break;
    }

}  while (opcao != 0);
}