#include <iostream>
#include <map>

using namespace std;

int main (){

    map<int,string> prod;
    map<int,string>::iterator itmap;

    prod.insert(pair<int,string>(0,"Mouse"));
    prod.insert(pair<int,string>(5,"Teclado"));
    prod.insert(pair<int,string>(10,"Monitor"));
    prod.insert(pair<int,string>(19,"Cx.Som"));

    itmap = prod.find(10);
    prod.erase(itmap);

    itmap=prod.find(19);
    if(itmap==prod.end()){
        cout << "Produto nao encontrado" << endl;
    } else {
        cout << "Produto em estoque" << endl;
        cout << "Codigo: " << itmap->first << " Valor: " << itmap->second << endl;
    }

    for(itmap=prod.begin(); itmap!=prod.end(); itmap++){
        cout << itmap->first << " - " << itmap->second << endl;
    }

    cout << "Tamanho do map: " << prod.size() << endl;

    cout << "Valor com a posicao 19: " << prod.at(19) << endl;

    return 0;
}
