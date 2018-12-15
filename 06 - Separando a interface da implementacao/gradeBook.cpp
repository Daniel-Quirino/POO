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
    courseName = name;
}

string GradeBook::getCourseName()
{
    return courseName;
}
