#include <iostream>

using namespace std;

int main()
{
    int years;
    float amount,rate,sum;
    cout<<"Enter initial amount:";
    cin>>amount;
    cout<<endl<<"Enter number of years:";
    cin>>years;
    cout<<endl<<"Enter interest rate(percent per year):";
    cin>>rate;
    for(int i=0;i<years;i++)
    {
        sum=amount+(amount*(rate/100));
        amount=sum;
    }
    cout<<endl;
    cout<<"At the end of the "<<years<<",you will have "<<sum<<"dollars";
    return 0;
}
