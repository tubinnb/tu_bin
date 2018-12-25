#include <iostream>
#include<cmath>
using namespace std;
double hyp(double x,double y){
	double z=sqrt(x*x+y*y);
	return z;
}
int main()
{
	double x,y;
	cin>>x>>y;
	cout<<hyp(x,y);
		return 0;
}
