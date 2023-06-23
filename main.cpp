#include <QCoreApplication>
#include "arvore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Arvore Pedro;
    Disciplina d1(10, "Poo");
    Disciplina d2(20, "Barco");
    Disciplina d3(9, "Paa");
    Disciplina d4(15, "So");
    Pedro.inserir(d1);
    Pedro.inserir(d2);
    Pedro.inserir(d3);
    Pedro.inserir(d4);
    Pedro.imprimir();
    std::cout << "Remover d1\n";
    Pedro.remover(d1);
    Pedro.imprimir();
    Pedro.buscar(d1);
    Pedro.buscar(d2);
    return a.exec();
}
