# include "avaliacao_basica_bst.hpp"
# include "Entrada.hpp"


int main() {
    avaliacao_basica();

    Dados dados;
    BST bst;

    string input;
    getline(cin, input);

    do{
        getline(cin, input);
        string* entrada = dados.separa_dados(input);
        int matricula = dados.converte_dado(entrada[0]);

        Aluno aluno;
        aluno.matricula = matricula; 
        aluno.nome = entrada[1];
        bst.inserir_aluno(aluno);
    }while(input != "");
    


    bst.imprimir_arvore();

    return 0;
}