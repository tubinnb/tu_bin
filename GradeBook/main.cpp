#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
   string courseName;
   string teachername;
public:
    GradeBook(string a,string b){courseName=a;teachername=b;}
   void setCourseName(string a){courseName = a;}
   string getCourseName()const{return courseName;}
   void setname(string a){teachername = a;}
   string getname()const{return teachername;}
   void displayMessage()const
   {
       cout<<"Welcome to the grade book"<<getCourseName()<<endl;
       cout<<"This course is presented by: "<<getname()<<endl;
   }
};
