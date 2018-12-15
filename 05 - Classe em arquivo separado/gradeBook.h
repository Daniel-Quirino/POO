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

        GradeBook (string name)
        {
            setCourseName(name);
        }

        void displayMessage( string courseName )
        {
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        }

        void setCourseName ( string name)
        {
            courseName = name;
        }

        string getCourseName()
        {
            return courseName;
        }

    private:
        string courseName;
};

#endif // GRADEBOOK_H_INCLUDED
