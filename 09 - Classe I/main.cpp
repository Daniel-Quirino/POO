#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"
#include "Time.cpp"

int main()
{
    Time t;

    cout << "The initial universal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime( 13, 27, 6 );


    cout << "\n\nUniversal time after setTime is ";
    t.printUniversal();
    cout << "\nStandard time after setTime is ";
    t.printStandard();

    t.setTime( 99, 99, 99 );

    cout << "\n\nAfter attempting invalid settings:"
    << "\nUniversal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl;

    return 0;
}
