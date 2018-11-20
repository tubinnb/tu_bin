#include <iostream>
#include "GradeBook.h"

int main()
{
    GradeBook gradeBook ("c++","Mr.Li");

    cout <<"The courseName is:"<<gradeBook.getCourseName()<<endl;

    cout <<" Teacher's name is:"<<gradeBook.getTeacherName()<<endl;

    gradeBook.displayMessage();

    return 0;
}
