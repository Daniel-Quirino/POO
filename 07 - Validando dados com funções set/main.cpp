#include "gradeBook.h"
#include "gradeBook.cpp"

int main()
{
    GradeBook gradeBook1("Introduction to Programming in C++");
    GradeBook gradeBook2("Data Structures in C++");

    cout << "gradeBook1 = " << gradeBook1.getCourseName() << endl
         << "gradeBook2 = " << gradeBook2.getCourseName() << endl;

    return 0;
}
