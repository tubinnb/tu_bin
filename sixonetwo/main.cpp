#include <iostream>

using namespace std;

int main()


{

 double hours[3];
 double charge[3] = {0,0,0};
 int i;
 for( i = 0; i < 3; i++)
   {
    cout<<"请输入第%d位客户的停车时间\n",i+1;
    cout<<"%lf",&hours[i];
   }
 for( i = 0; i < 3; i++)
   {
   if(hours[i] <= 3)
    {
      charge[i] = 2;
    }
   else if(hours[i] > 3 && hours[i] <= 19)
    {
      charge[i] = 2.0 + (hours[i] - 3.0) * 0.5;
    }
   else
    {
    charge[i] = 10.0;
    }
   }
  cout<<"Car","Hours","Charge";
  for( i = 0; i < 3; i++)
   {
   cout<<i+1,hours[i],charge[i];
   }
   cout<<"TOTAL",hours[0]+hours[1]+hours[2],charge[0]+charge[1]+charge[2];
   return 0;
 }

