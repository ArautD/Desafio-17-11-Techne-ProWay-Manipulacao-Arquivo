#include "contadorLinhas.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void contarLinhas(){ //atividade 1 - Contar e mostrar quantas linhas tem um arquivo
    ifstream arquivo("dados.txt");
    string linha;
    int contador = 0;

    if (!arquivo){
        cerr << "Erro ao abrir o arquivo" <<endl;
    }

    while (getline(arquivo, linha)){
        contador++;
    }

    std::cout << "O arquivo possui" << contador << "linnhas." <<std::endl;

    arquivo.close();
}