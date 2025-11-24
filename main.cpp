#include <iostream>
#include <fstream>
#include <string>
#include "menu.h"
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");
    
    exibeMenu();

    return 0;
}