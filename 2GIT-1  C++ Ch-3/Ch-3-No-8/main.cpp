#include<iostream>

using namespace std;

int main()
{
    char ch;
    do
    {
    char temp;
    int pounds1,shillings1,pences1;
    int pounds2,shillings2,pences2;
    cout<<"Enter first amount: £";
    cin>>pounds1>>temp>>shillings1>>temp>>pences1;
    cout<<endl<<"Enter second amount: £";
    cin>>pounds2>>temp>>shillings2>>temp>>pences2;
    pounds1 += pounds2;
    shillings1 += shillings2;
    pences1 += pences2;
    if(pences1>11)
    {
            shillings1 += (pences1/12);
            pences1 = pences1%12;
    }
    if(shillings1>19)
    {
        pounds1 += (shillings1/20);
        shillings1 = shillings1%20;
    }
    cout<<"Total is: £"<<pounds1<<"."<<shillings1<<"."<<pences1;
    cout<<endl<<"Do you wish to continue(y/n)?:  ";
    cin>>ch;
    }
    while(ch == 'y');
    cout<<endl;
    return 0;

}
