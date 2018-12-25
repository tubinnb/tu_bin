#include<iostream>
using namespace std;
int Min(int x,int y,int z)
{
	int a[3];
	a[0]=x;a[1]=y;a[2]=z;
	int min=a[0];
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
