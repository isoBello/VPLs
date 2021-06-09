# include "Entrada.hpp"

using namespace std;

string* ent::separa_dados(string aluno){
    string* dados = new string[2]; 
    string delimiter = " ";

    size_t pos = 0;
    string token;
    
    while ((pos = aluno.find(delimiter)) != string::npos) {
        token = aluno.substr(0, pos);
        dados[0] = token;
        aluno.erase(0, pos + delimiter.length());
    }

    dados[1]= aluno;
    return dados;
}

int ent::converte_dado(string mat){
    stringstream matricula; 
    int num_matricula; 

    matricula << mat;
    matricula >> num_matricula;

    return num_matricula;
}