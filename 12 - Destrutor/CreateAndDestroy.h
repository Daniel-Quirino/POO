#include <string>
using std::string;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
    public:
        CreateAndDestroy( int, string );
        ~CreateAndDestroy();
    private:
        int objectID;
        string message;

 };

#endif
