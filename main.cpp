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
    std::cout << Pedro.buscar(2);
    std::cout << Pedro.buscar(10);
    Pedro.imprimir();
    return a.exec();
}
