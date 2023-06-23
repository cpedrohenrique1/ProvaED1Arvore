#ifndef ARVORE_H
#define ARVORE_H
#include "no.h"
#include <iostream>

class Arvore
{
private:
    No* raiz;
    void inserirRecursivo(No** raiz, Disciplina obj);
    void centralEsquerda(No* raiz)const;
    void preEsquerda(No* raiz) const;
    void posEsquerda(No* raiz) const;
    void preDireita (No* raiz) const;
    void posDireita (No* raiz) const;
    void centralDireita (No* raiz) const;
    void removerRecursivo(No **raiz, Disciplina obj);
    std::string buscarRecursivo(No **raiz, int codigo);
    Disciplina retornar_Maior(No **raiz);
public:
    Arvore();
    ~Arvore();
    void inserir(Disciplina obj);
    std::string buscar(int codigo){return buscarRecursivo(&raiz, codigo);}
    void imprimir();
    void remover(Disciplina obj);
};

#endif // ARVORE_H
