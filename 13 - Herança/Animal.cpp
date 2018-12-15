#include "Animal.h"

int Animal::GetNumeroPatas()
{
    return numeroPatas;
}
bool Animal::GetCarnivoro()
{
    return carnivoro;
}
float Animal::GetPeso()
{
    return peso;
}
string Animal::GetCor()
{
 return cor;
}
int Animal::GetIdade()
{
    return idade;
}



void Animal::SetNumeroPatas(int _numeroPatas)
{
    numeroPatas = _numeroPatas;
}
void Animal::SetCarnivoro (bool _carnivoro)
{
    carnivoro = _carnivoro;
}
void Animal::SetPeso (float _peso)
{
    peso = _peso;
}
void Animal::SetCor (string _cor)
{
    cor = _cor;
}
void Animal::SetIdade (int _idade)
{
    idade = _idade;
}
