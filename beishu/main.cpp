#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;

    cout <<"first=";
    cin >>a;
    cout <<"second=";
    cin >>b;

    if (a%b==0)
        cout <<"a是b的倍数"<<endl;
    else
        cout <<"a不是b的倍数"<<endl ;
}
