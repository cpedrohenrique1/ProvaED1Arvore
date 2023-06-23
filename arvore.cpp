#include "arvore.h"

Arvore::Arvore():
    raiz(0)
{}

Arvore::~Arvore()
{
    if (raiz != 0)
        delete raiz;
}

void Arvore::inserir(Disciplina obj)
{
    inserirRecursivo(&raiz, obj);
}

void Arvore::imprimir()
{
    std::cout<<"Encaminhamento Central a Esquerda";centralEsquerda(raiz); std::cout<< std::endl;
}

void Arvore::remover(Disciplina obj)
{
    removerRecursivo(&raiz, obj);
}

void Arvore::inserirRecursivo(No **raiz, Disciplina obj)
{
    if (*raiz == 0)
    {
        *raiz = new No(obj);
    }
    else
    {
        if (obj.getCodigo() < (*raiz)->getDado())
        {
            inserirRecursivo(&(*raiz)->esquerda, obj);
        }
        else
        {
            if (obj.getCodigo() > (*raiz)->getDado())
            {
                inserirRecursivo(&(*raiz)->direita, obj);
            }
            else
            {
                throw std::string("Ja existe");
            }
        }
    }
}

void Arvore::centralEsquerda(No* raiz)const{
    if(raiz != 0){
        centralEsquerda(raiz->getEsquerda());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
        centralEsquerda(raiz->getDireita());
    }
}

void Arvore::preEsquerda(No *raiz) const
{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
        preEsquerda(raiz->getEsquerda());
        preEsquerda(raiz->getDireita());
    }
}

void Arvore::posEsquerda(No *raiz) const
{
    if(raiz != 0){
        posEsquerda(raiz->getEsquerda());
        posEsquerda(raiz->getDireita());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
    }
}

void Arvore::preDireita(No *raiz) const
{
    if(raiz != 0){
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
        preDireita(raiz->getDireita());
        preDireita(raiz->getEsquerda());
    }
}

void Arvore::posDireita(No *raiz) const
{
    if(raiz != 0){
        posDireita(raiz->getDireita());
        posDireita(raiz->getEsquerda());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
    }
}

void Arvore::centralDireita(No *raiz) const
{
    if(raiz != 0){
        centralDireita(raiz->getDireita());
        std::cout<<std::endl<<"Elemento=>  "<<raiz->getDisciplina().toString();
        centralDireita(raiz->getEsquerda());
    }
}

void Arvore::removerRecursivo(No **raiz, Disciplina obj){
    No *aux = 0;
    if(*raiz != 0){
        if((*raiz)->getDado() == obj.getCodigo()){
            aux = *raiz;
            if((*raiz)->esquerda == 0){
                *raiz = (*raiz)->direita;
                aux->esquerda = 0;
                aux->direita = 0;
                delete aux;
            }else
                if((*raiz)->direita == 0){
                    *raiz = (*raiz)->esquerda;
                    aux->esquerda = 0;
                    aux->direita = 0;
                    delete aux;
                }else
                    {
                        (*raiz)->setDisciplina(this->retornar_Maior(&(*raiz)->esquerda));
                    }
        }else
            {
                if((*raiz)->getDado() < obj.getCodigo())
                    removerRecursivo(&(*raiz)->direita,obj);
                else
                    if((*raiz)->getDado() > obj.getCodigo())
                        removerRecursivo(&(*raiz)->esquerda,obj);
        }

    }
    else throw std::string("Elemento não Existe");
}

std::string Arvore::buscarRecursivo(No **raiz, int codigo)
{
    if (*raiz == 0)
    {
        return "Nao existe\n";
    }
    else
    {
        if (codigo < (*raiz)->getDado())
        {
            return buscarRecursivo(&(*raiz)->esquerda, codigo);
        }
        else
        {
            if (codigo > (*raiz)->getDado())
            {
                return buscarRecursivo(&(*raiz)->direita, codigo);
            }
            else
            {
                return "Existe\n" + (*raiz)->getDisciplina().toString();
            }
        }
    }
}

Disciplina Arvore::retornar_Maior(No **raiz)
{
    Disciplina disciplina;
        No *aux = 0;
        if((*raiz)->direita != 0) return (retornar_Maior(&(*raiz)->direita));
        else{
            aux = *raiz;
            disciplina = (*raiz)->getDisciplina();
            *raiz = (*raiz)->esquerda;
            aux->esquerda = 0;
            aux->direita = 0;
            delete aux;
            return disciplina;
        }
}
