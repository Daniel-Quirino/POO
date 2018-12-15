#include <iostream>
using std::cout;
using std::endl;

class Count
{
    public:

        void setX( int value )
        {
        x = value;
        }

        void print()
        {
        cout << x << endl;
        }

    private:
        int x;
};

int main()
{
    Count counter; // cria objeto counter
    Count *counterPtr = &counter; // cria ponteiro para counter
    Count &counterRef = counter; // criar referência para counter

    cout << "Set x to 1 and print using the object’s name: ";
    counter.setX( 1 );
    counter.print();

    cout << "Set x to 2 and print using a reference to an object: ";
    counterRef.setX( 2 );
    counterRef.print();

    cout << "Set x to 3 and print using a pointer to an object: ";
    counterPtr->setX( 3 );
    counterPtr->print();
    return 0;
}
