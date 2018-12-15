#include <iostream>
#include "Cavalo.h"

Cavalo::Cavalo(string _nome)
{
    nome = _nome;
}

string Cavalo::GetNome()
{
    return nome;
}

 void Cavalo::quantidadeNoMundo()
 {
    cout << "Existem 10 milhoes de cavalos no mundo" << endl;
 }

