#include <iostream>

using namespace std;

int main()
{
    char ch;
    do
    {
      char temp,oper;
      int a,b,c,d,total1,total2;
      cout<<"Enter first fraction: ";
      cin>>a>>temp>>b;
      cout<<"Enter operator: ";
      cin>>oper;
      cout<<"Enter second fraction: ";
      cin>>c>>temp>>d;
      switch(oper)
      {
      case'+':
        total1 = (a*d + b*c);
        total2 = b*d;
        cout<<"Sum is"<<total1<<"/"<<total2;
        break;

      case'-':
        total1 = (a*d - b*c);
        total2 = b*d;
        cout<<"Subtraction is"<<total1<<"/"<<total2;
        break;

      case'*':
        total1 = a*c;
        total2 = b*d;
        cout<<"Multiplication is"<<total1<<"/"<<total2;
        break;

      case'/':
        total1 = a*d;
        total2 = b*c;
        cout<<"Division is"<<total1<<"/"<<total2;
        break;

      default:
        cout<<"Invalid operator"<<endl;
        break;
      }

      cout<<endl<<"Do you want to calculate again? (y/n): ";
      cin>>ch;
      }
      while( ch=='y');
      return 0;
}
