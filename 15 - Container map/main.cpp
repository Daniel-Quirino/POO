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

    prod.erase(10);

    itmap=prod.find(19);
    if(itmap==prod.end()){
        cout << "Produto nao encontrado" << endl;
    } else {
        cout << "Produto em estoque" << endl;
        cout << "Codigo: " << itmap->first << " Valor: " << itmap->second << endl;
    }



    //for(auto it=prod.begin(); it!=prod.end(); it++){
    //    cout << it.first << " - " << it.second << endl;
    //}

    return 0;
}
