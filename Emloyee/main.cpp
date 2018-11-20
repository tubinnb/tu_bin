#include <iostream>
#include <string>
using namespace std;
class Invoice
{
    string name;
    string detile;
    int sum;
    int danjia;
public:
   Invoice(string a,string b,int c,int d)
   {
       name = a;
       detile = b;
       sum = c;
       danjia = d;
   }
};
