#include "menu.h"
#include <iostream>

using namespace std;

void exibeMenu(){
    int opcao;

do{
    system("cls");
    std::cout << "\n=============== Menu de Seleção ===============\n";
    std::cout << "(1) Verficiar quantas linhas tem no arquivo" << std::endl;
    std::cout << "(2) Contar quantas palavras tem no arquivo" << std::endl;
    std::cout << "(3) Encontrar uma palavra" << std::endl;
    std::cout << "(4) Exibir maior e menor número" << std::endl;
    std::cout << "(5) Trocar CACHORRO por MINGAU" << std::endl;
    std::cin >> opcao;

    switch (opcao){
        case 1:
        contarLinhas();
        system("pause");
        break;
        case 2:
        contarPalavras();
        system("pause");
        break;
        case 3:
        buscarPalavra();
        system("pause");
        break;
        case 4:
        maiorMenorPalavra();
        system("pause");
        break;
        case 5: 
        trocaPalavra();
        system("pause");
        break;

        case 0:
        system("cls");
        cout << "Saindo...\n"; break;
        default: cout << "Opção inválida! \n"; break;
    }

}  while (opcao != 0);
}