
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string,string);

        void setCourseName(string);
        string getCourseName();

        void setTeacherName(string);
        string getTeacherName();

        void displayMessage();

    private:
        string courseName;
        string teacherName;
};

#endif // GRADEBOOK_H
