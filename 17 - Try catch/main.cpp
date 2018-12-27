#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n1, double n2);

int main() {

    vector<int>num(5);

    double n1, n2;

    cin >> n1 >> n2;

    try{

        //num.at(2)=10;
        //cout << num[2] << endl;

        //num.at(8)=40;
        //cout << num[8] << endl;

        cout << divide(n1,n2);

    }catch(const char* e){

        cout << "ERRO: " << e << endl;
    }

    return 0;
}


double divide(double n1, double n2){
    if(n2==0) {
        throw "Erro de divisao por ZERO";
    }
    return n1/n2;
}
