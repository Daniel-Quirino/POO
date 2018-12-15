#ifndef CAVALO_H_INCLUDED
#define CAVALO_H_INCLUDED
#include <iostream>

using namespace std;

class Cavalo : public Animal
{
    public:
        Cavalo(string _nome);
        string GetNome();
        void quantidadeNoMundo();

    protected:
        string nome;
};

#endif // CAVALO_H_INCLUDED
