#include "gradeBook.h"

GradeBook::GradeBook (string name)
{
    setCourseName(name);
}

void GradeBook::displayMessage( string courseName )
{
    cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
}

void GradeBook::setCourseName ( string name)
{
    if ( name.length() <= 25 )
    {
        courseName = name;
    }

    if ( name.length() > 25 )
    {
        courseName = name.substr( 0, 25 );
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName()
{
    return courseName;
}
