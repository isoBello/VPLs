# ifndef ENTRADA_H
# define ENTRADA_H

# include <string> 
# include <iostream>
# include <vector>
# include <sstream>

using namespace std;

typedef struct ent{
    string* separa_dados(string aluno);
    int converte_dado(string mat);
}Dados;


#endif