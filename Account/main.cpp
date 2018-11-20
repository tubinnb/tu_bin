#include <iostream>
using namespace std;
class Account
{
    int money;
public:
    Account(int n):money(n){}
    Account(){money = 0;cout<<"初始余额是无效的。"<<endl;}
    void credit(int n){money += n;}
    void debit(int n)
    {
        if(n<=money)
        {
            money -= n;
        }
        else
            cout<<"Debit amount exceeded account balance."<<endl;
    }
    int getBalance(){return money;}
};
int main()
{
    Account a(10);
    Account b;
    a.credit(100);
    a.debit(120);
    cout<<a.getBalance()<<endl;
    return 0;
}
