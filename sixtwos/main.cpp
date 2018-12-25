#include<iostream>
using namespace std;
double Min(double x,double y,double z)
{
	double a[3];
	a[0]=x;a[1]=y;a[2]=z;
	double min=a[0];
	for(int i=1;i<3;i++)
	if(min>a[i])
	min=a[i];
	return min;
}
int main()
{
	cout<<Min(2,1,9);
	return 0;
}
