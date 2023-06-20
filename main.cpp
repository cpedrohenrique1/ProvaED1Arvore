#include <QCoreApplication>
#include "arvore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Arvore teste;
    Disciplina d1(10, "Poo");
    Disciplina d2(20, "Barco");
    Disciplina d3(9, "Paa");
    Disciplina d4(15, "So");
    teste.inserir(d1);
    teste.inserir(d2);
    teste.inserir(d3);
    teste.inserir(d4);
    teste.imprimir();
    std::cout << "Remover d1\n";
    teste.remover(d1);
    teste.imprimir();
    return a.exec();
}
