#include <iostream>

using namespace std;


int main()
{
    int i,j,k;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5 - i;j++)
        {
            cout<<("%c",' ');

        }
        for(j =6; j > 5 - i ;j-- )
            {
                cout<<("*");
            }
        for(j =5; j > 5 - i ;j-- )
            {
                cout<<("*");
            }


        cout<<("\n");
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 12; j > 10 - i;j--)
        {
            cout<<("%c",' ');

        }
        for(j =1; j < 4 - i ;j++ )
            {
                cout<<("*");
            }
        for(j =0; j < 4 - i ;j++ )
            {
                cout<<("*");
            }

        cout<<("\n");
        return 0;
    }

