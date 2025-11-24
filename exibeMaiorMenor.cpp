#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "exibeMaiorMenor.h"

using namespace std;

void maiorMenorPalavra(){
    string nomeArquivo = "dados.txt";
    ifstream arquivo (nomeArquivo);
    if (!arquivo.is_open()){
        cerr << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
        return;
    }
    
    string palavra;
    string menor, maior;

    if (arquivo >> palavra){
        menor = maior = palavra;
    }

    while (arquivo >> palavra) {
       if(palavra.size() < menor.size()){
        menor = palavra;
       } else {
        maior = palavra;
       }
    }
    std::cout << "Menor palavra: " << menor << std::endl;
    std::cout << "Maior palavra: " << maior << std::endl;
}