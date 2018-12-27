#include <iostream>
#include <set>

using namespace std;

int main () {

    set<int>stl;

    stl.insert(9);
    stl.insert(1);
    stl.insert(0);
    stl.insert(2);
    stl.insert(8);
    stl.insert(3);
    stl.insert(7);
    stl.insert(4);
    stl.insert(6);

    set<int>::iterator it;

    for(it = stl.begin(); it != stl.end(); it++) {
        cout << *it << " - ";
        cout << endl;
    }

    cout << endl;

    it = stl.end();
    it = stl.insert(it,5);

    it = stl.begin();
    it = stl.insert(it,100);

    for(it = stl.begin(); it != stl.end(); it++) {
        cout << *it << " - ";
        cout << endl;
    }

    return 0;
}
