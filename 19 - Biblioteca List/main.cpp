#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> lista;
    lista.push_back(7);
    lista.push_back(5);
    lista.push_back(16);
    lista.push_back(8);

    lista.push_front(1);
    lista.push_back(100);

    for (lista<int>::iterator it = lista.begin(); it != lista.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}
