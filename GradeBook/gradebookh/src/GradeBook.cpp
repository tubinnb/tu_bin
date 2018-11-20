
#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(string course,string teacher)
{
    setCourseName(course);
    setTeacherName(teacher);
}

void GradeBook::setCourseName(string name)
{
    courseName=name;
}
string GradeBook::getCourseName()
{
  return courseName;
}


void GradeBook::setTeacherName(string name)
{
    teacherName=name;
}
string GradeBook::getTeacherName()
{
    return teacherName;
}




void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for"<<getCourseName()<<"!"<<endl;
    cout<<"This course is presented by:"<<getTeacherName()<<endl;
}

