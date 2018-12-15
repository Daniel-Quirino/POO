#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
    public:

        GradeBook (string name);
        void displayMessage( string courseName );
        void setCourseName ( string name);
        string getCourseName();

    private:
        string courseName;
};

#endif // GRADEBOOK_H_INCLUDED
