#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>

using namespace std;

class Animal {

    public:
        Animal();
        int GetNumeroPatas();
        bool GetCarnivoro ();
        float GetPeso ();
        string GetCor ();
        int GetIdade ();
        void quantidadeNoMundo();

        void SetNumeroPatas(int _numeroPatas);
        void SetCarnivoro (bool _carnivoro);
        void SetPeso (float _peso);
        void SetCor (string _cor);
        void SetIdade (int _idade);

    private:
        int numeroPatas;
        bool carnivoro;
        float peso;
        string cor;
        int idade;

};



#endif // ANIMAL_H_INCLUDED
