#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <vector>
using std::vector;

void outputVector( const vector< int > & );
void inputVector( vector< int > & );

int main()
{
    vector< int > integers1( 7 );
    vector< int > integers2( 10 );

    cout << "Size of vector integers1 is " << integers1.size()
    << "\nvector after initialization: " << endl;
    outputVector( integers1 );

    cout << "\nSize of vector integers2 is " << integers2.size()
    << "\nvector after initialization:" << endl;
    outputVector( integers2 );

    cout << "\nEnter 17 integers:" << endl;
    inputVector( integers1 );
    inputVector( integers2 );

    cout << "\nAfter input, the vectors contain:\n"
    << "integers1:" << endl;
    outputVector( integers1 );
    cout << "integers2:" << endl;
    outputVector( integers2 );

    cout << "\nEvaluating: integers1 != integers2" << endl;

    if ( integers1 != integers2 )
    cout << "integers1 and integers2 are not equal" << endl;

    vector< int > integers3( integers1 );

    cout << "\nSize of vector integers3 is " << integers3.size()
    << "\nvector after initialization:" << endl;
    outputVector( integers3 );

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1:" << endl;
    outputVector( integers1 );
    cout << "integers2:" << endl;
    outputVector( integers2 );

    cout << "\nEvaluating: integers1 == integers2" << endl;

    if ( integers1 == integers2 )
    cout << "integers1 and integers2 are equal" << endl;

    cout << "\nintegers1[5] is " << integers1[ 5 ];

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[ 5 ] = 1000;
    cout << "integers1:" << endl;
    outputVector( integers1 );

    cout << "\nAttempt to assign 1000 to integers1.at( 15 )" << endl;
    integers1.at( 15 ) = 1000;
    return 0;
}

void outputVector( const vector< int > &array )
{
    size_t i;
    for ( i = 0; i < array.size(); i++ )
    {
        cout << setw( 22 ) << array[ i ];

        if ( ( i + 1 ) % 4 == 0 )
        cout << endl;
    }
    if ( i % 4 != 0 )
    cout << endl;
}


void inputVector( vector< int > &array )
{
    for ( size_t i = 0; i < array.size(); i++ )
    cin >> array[ i ];
}
