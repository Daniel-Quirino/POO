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
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Inicial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "Please enter the course name:" << endl;
    getline( cin, nameOfCourse );
    cout << endl;

    myGradeBook.displayMessage( nameOfCourse );
    return 0;
}
