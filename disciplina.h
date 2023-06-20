#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <iostream>

class Disciplina
{
private:
    int codigo;
    std::string descricao;
public:
    Disciplina();
    Disciplina(int codigo, std::string descricao);
    std::string toString() const;
    int getCodigo() const;
    void setCodigo(int codigo);
    std::string getDescricao() const;
    void setDescricao(std::string descricao);
};

#endif // DISCIPLINA_H
