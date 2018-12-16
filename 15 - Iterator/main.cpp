#include <iostream>
#include <vector>

using namespace std;

int main() {

      vector<string> produtos;
          produtos.push_back("Mouse");
          produtos.push_back("Teclado");
          produtos.push_back("Monitor");
          produtos.push_back("Gabinete");
          produtos.push_back("Cx.Som");


    for(vector<string>::iterator it=produtos.begin(); it!=produtos.end(); it++) {
        cout << *it << endl;
    }

    return 0;

}
