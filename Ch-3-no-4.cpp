#include<iostream>
using namespace std;
int main()
{
    double num1,num2,sum;
    char oper,next;
    do {
    cout<<"Enter first number,operator,second number:";
    cin>>num1>>oper>>num2;
        switch(oper)
        {
        case'+':
            sum=num1 + num2;
            break;
        case'-':
            sum=num1 - num2;
            break;
        case'*':
            sum=num1 * num2;
            break;
        case'/':
            sum=num1 / num2;
            break;
        default:
            sum =0;
            break;
        }
       cout<<"Answer="<<sum<<endl;
       cout<<"Do another(y/n)?"<<endl;
       cin>>next;
      }
    while(next == 'y');

    return 0;
}
