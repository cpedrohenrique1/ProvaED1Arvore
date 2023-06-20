#include "disciplina.h"

Disciplina::Disciplina():
    codigo(0),
    descricao("")
{}

Disciplina::Disciplina(int codigo, std::string descricao):
    codigo(codigo),
    descricao(descricao)
{}

std::string Disciplina::toString() const
{
    return "Disciplina: " + descricao + " Codigo: " + std::to_string(codigo) + (char)10;
}

int Disciplina::getCodigo() const
{
    return codigo;
}

void Disciplina::setCodigo(int codigo)
{
    this->codigo = codigo;
}

std::string Disciplina::getDescricao() const
{
    return descricao;
}

void Disciplina::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}
