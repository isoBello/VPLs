#ifndef ALUNO_H
#define ALUNO_H

# include <string>
# include <iostream>
# include <sstream>

using namespace std; 

struct Aluno{
    int matricula; 
    string nome; 

    void imprimir_dados();
};

#endif