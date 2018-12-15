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

int main()
{
    GradeBook gradeBook1("Introduction to C++");
    GradeBook gradeBook2("Data Structures in C++");

    cout << "gradeBook1 = " << gradeBook1.getCourseName()
         << "gradeBook2 = " << gradeBook2.getCourseName()
         << endl;

    return 0;
}
