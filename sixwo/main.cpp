#include<iostream>
using namespace std;
int main()
{
	int  x,sum=0;
	cin>>x;
	while(x){
		sum=sum*10+x%10;
		x/=10;
	}
	cout<<sum;
	return 0;
}
