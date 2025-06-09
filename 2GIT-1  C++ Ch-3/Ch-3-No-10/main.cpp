#include<iostream>
using namespace std;
int main()
{
    float finalamount,amount,rate,total;
    int year=0;
    cout<<"Enter the final amount you want to get: ";
    cin>>finalamount;
    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter interest rate: ";
    cin>>rate;
    total=amount;
    while(total<finalamount)
    {
        total=total*(1+rate/100);
        year++;
    }
    cout<<"You need "<<year<<" years to get"<<finalamount<<endl;
    return 0;
}
