#include <iostream>

using namespace std;

int main()
{
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr;
    for(size_t i=0;i<5;i++)
    {
        cout<<values[i]<<" "<<endl;
    }
    vPtr=values;
    vPtr=&values[0];
    for(size_t j=0;j<5;j++)
    {
        cout<<*(vPtr+j)<<" "<<endl;
    }
    for(size_t m=0;m<5;m++)
    {
        cout<<*(values+m)<<" "<<endl;
    }
    for(size_t k=0;k<5;k++)
    {
        cout<<vPtr[k]<<" "<<endl;
    }
    values[4];
    *(values+4);
    vPtr[4];
    *(vPtr+4);
    //���õ���1002500+3*8=1002524�����ַ���洢����6
    //values[4]=1002500+4*8=1002532,vPtr�ĵ�ַΪ1002532-4*8=1002500���洢����2
    return 0;
}
