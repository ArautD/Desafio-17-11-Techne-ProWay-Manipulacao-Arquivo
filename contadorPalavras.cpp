#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "contadorPalavras.h"

using namespace std;

void contarPalavras(){
    ifstream arquivo("dados.txt"); //Interessante adicionar pro usuario digitar uma frase no inicio do programa pra carregar ela no arquivo já
    string linha;
    int contador = 0;

    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    while (getline(arquivo, linha)){
        stringstream ss(linha);
        string palavra;
        while (ss >> palavra){
            contador ++;
        }
    }
    std::cout << "O arquivo possui " << contador << " palavras. " << std::endl;
    arquivo.close();
}