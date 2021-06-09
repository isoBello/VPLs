# include "BST.hpp"

using namespace std; 

No* cria_no(Aluno aluno){
    No* aux = new No;
    aux-> aluno = aluno;
    aux-> esq = nullptr;
    aux-> dir = nullptr;
    return aux; 
}

void tree::inserir_aluno(Aluno aluno){
    if(raiz != nullptr) inserir_aluno_helper(raiz, aluno);
    else raiz = cria_no(aluno);
}

void tree::inserir_aluno_helper(No* no, Aluno aluno){
    if(aluno.matricula < no-> aluno.matricula){
        if(no->esq == nullptr) no-> esq = cria_no(aluno);
        else inserir_aluno_helper(no-> esq, aluno);
    } else if(aluno.matricula > no-> aluno.matricula){
        if(no-> dir == nullptr) no-> dir = cria_no(aluno);
        else inserir_aluno_helper(no-> dir, aluno);
    }
}

void caminha_arvore(No* no){
    if(no == nullptr) return; 
    
    caminha_arvore(no-> esq);
    no-> aluno.imprimir_dados();

    caminha_arvore(no-> dir);
}

void tree::imprimir_arvore(){
    caminha_arvore(raiz);
    cout << endl;
}

No* procura_matricula(No* no, int matricula, int chave){
    if(no == nullptr) return nullptr;
    
    if(no-> aluno.matricula == chave){
        return no;
    }else if(no-> aluno.matricula > chave){
        No* aux = no-> esq;
        if(aux == nullptr) return nullptr;
        
        int mat = aux-> aluno.matricula;
        procura_matricula(aux, mat, chave);

    }else{
        No* aux = no-> dir;
        if(aux == nullptr) return nullptr;
        
        int mat = aux-> aluno.matricula;
        procura_matricula(aux, mat, chave);
    }
}

Aluno* tree::procurar_aluno(int matricula){
    No* no = procura_matricula(raiz, raiz-> aluno.matricula, matricula);
    if(no == nullptr) return nullptr;
    
    return &no-> aluno;
}