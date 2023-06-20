#include "no.h"

No::No():
    dado(0),
    disciplina(),
    esquerda(0),
    direita(0)
{}

No::No(Disciplina disciplina):
    dado(0),
    disciplina(disciplina),
    esquerda(0),
    direita(0)
{
    this->dado = disciplina.getCodigo();
}

No::~No(){
    if (esquerda != 0)
        delete esquerda;
    if (direita != 0)
        delete direita;
}

No *No::getEsquerda() const
{
    return esquerda;
}

void No::setEsquerda(No* esquerda)
{
    this->esquerda = esquerda;
}

No *No::getDireita() const
{
    return direita;
}

void No::setDireita(No* direita)
{
    this->direita = direita;
}

Disciplina No::getDisciplina() const
{
    return disciplina;
}

void No::setDisciplina(Disciplina disciplina)
{
    this->disciplina = disciplina;
    this->dado = disciplina.getCodigo();
}

int No::getDado() const
{
    return dado;
}

void No::setDado(int dado)
{
    this->dado = dado;
}
