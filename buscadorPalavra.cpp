#include "buscadorPalavra.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void buscarPalavra(){
    ifstream arquivo("dados.txt");
    string linha, palavraInput;

    bool palavraEncontrada = false;

    if (!arquivo){
        cerr << "Erro ao abrir o arquivo! " << endl;
        return;
    }

    cout << "Qual a palavra que deseja procurar?";
    cin >> "usuário: " >> palavraInput;

    while (getline(arquivo, linha)){
        if (linha.find(palavraInput) != string::npos){
            palavraEncontrada = true;
            break;
        }
    }

    if (palavraEncontrada){
        std::cout << "A palavra \"" << palavraInput << "\" foi encontrada no arquivo. " <<std::endl;
    }else{
        std::cout << "A palavra \"" << palavraInput << "\" não foi encontrada no arquivo. " <<std::endl;
    }
    arquivo.close();
}