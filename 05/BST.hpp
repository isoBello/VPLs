# ifndef BST_H
# define BST_H

# include <iostream>
# include "Aluno.hpp"

typedef struct no{
    Aluno aluno; 
    no* esq; 
    no* dir;
}No;

typedef struct tree{
    no* raiz = nullptr;

    void inserir_aluno(Aluno);
    void inserir_aluno_helper(No*, Aluno);
    void imprimir_arvore();
    
    Aluno* procurar_aluno(int);
}BST;

#endif