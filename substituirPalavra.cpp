#include <iostream>
#include <fstream>
#include <string>
#include "substituirPalavra.h"

using namespace std;

void trocaPalavra(){
    ifstream arquivo ("dados.txt");
    ofstream temp ("temp.txt");
    string linha;

    if (!arquivo || !temp) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    while (getline(arquivo, linha)){
        size_t pos = 0;
        while ((pos = linha.find("cachorro", pos)) != string::npos){
            linha.replace(pos, 8, "mingau");
            pos += 6;
        }
        temp << linha << endl;
    }

    arquivo.close();
    temp.close();

    remove("dados.txt");
    rename("temp.txt","dados.txt");

    cout << "Todas as alterações de 'Cachorro' foram substituídas para 'Mingau'!" << endl;
}
