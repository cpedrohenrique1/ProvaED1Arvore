#ifndef NO_H
#define NO_H
#include "disciplina.h"

class No
{
private:
    int dado;
    Disciplina disciplina;
public:
    No* esquerda;
    No* direita;
    No();
    No(Disciplina disciplina);
    ~No();
    No* getEsquerda() const;
    void setEsquerda(No* esquerda);
    No* getDireita() const;
    void setDireita(No* direita);
    Disciplina getDisciplina() const;
    void setDisciplina(Disciplina disciplina);
    int getDado() const;
    void setDado(int dado);
};

#endif // NO_H
