#include "Animal.h"
#include "Animal.cpp"

#include "Cavalo.h"

int main(){

    // Usando o conceito de Herança
    Cavalo *cavalo = new Cavalo;
    cavalo->SetIdade(1);

    cout << cavalo->GetIdade() << endl;



    Animal *animal = new Animal;
    animal->SetIdade(5);

    cout << animal->GetIdade() << endl;



    Animal animal2;
    animal2.SetIdade(3);

    cout << animal2.GetIdade() << endl;


    return 0;
}
