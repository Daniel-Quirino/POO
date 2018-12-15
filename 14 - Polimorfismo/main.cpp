#include "Animal.h"
#include "Animal.cpp"

#include "Cavalo.h"
#include "Cavalo.cpp"

int main(){

    // Usando o conceito de Herança
    Cavalo *cavalo = new Cavalo("Jorge");
    cavalo->SetIdade(1);

    cout << "Idade: " << cavalo->GetIdade() << " - " << cavalo->GetNome() <<  endl;
    cavalo->quantidadeNoMundo();



    Animal *animal = new Animal;
    animal->SetIdade(5);

    cout << animal->GetIdade() << endl;



    Animal animal2;
    animal2.SetIdade(3);

    cout << animal2.GetIdade()  <<  endl;
    animal2.quantidadeNoMundo();


    return 0;
}
