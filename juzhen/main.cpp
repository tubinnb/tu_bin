#include <iostream>
using namespace std;
class aaa
{
	private:
		int a[2][3];
	public:
		friend aaa operator+(aaa&A,aaa&B);
		friend ostream& operator<<(ostream&,aaa&);
		friend istream& operator>>(istream&,aaa&);
		aaa(){};
};

aaa operator+(aaa&A,aaa&B)
{
	aaa c;
	for(int i=0;i<2;i++)
     for(int j=0;j<3;j++)
      c.a[i][j]=A.a[i][j]+B.a[i][j];
	return c;
}

istream & operator >> (istream &input,aaa &a)
{
    cout<<"请输入矩阵： "<<endl;
  for(int i=0;i<2;i++)
   for(int j=0;j<3;j++)
    input>>a.a[i][j];
  return input;
}

ostream & operator << (ostream &output,aaa &C)
{
  cout<<"矩阵相加的结果为："<<endl;
  for(int i=0;i<2;i++)
  {
   for(int j=0;j<3;j++)
    output<<C.a[i][j]<<" ";
   cout<<endl;
	}
  return output;
}

int main()
{
	aaa A,B,C;
	cin>>A;
	cin>>B;
	C=A+B;
	cout<<C;
	return 0;
}


