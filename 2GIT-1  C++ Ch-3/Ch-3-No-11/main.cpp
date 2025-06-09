#include <iostream>

using namespace std;

int main()
{
    char ch;
    do
    {
      char temp;
      char oper;
      int pounds1,shillings1,pence1;
      int pounds2,shillings2,pence2;
      cout<<"Enter first amount: ";
      cin>>pounds1>>temp>>shillings1>>temp>>pence1;
      cout<<"Enter second amount: ";
      cin>>pounds2>>temp>>shillings2>>temp>>pence2;
      cout<<"Choose the operator: (+) or (-) or (*) : ";
      cin>>oper;
      switch(oper)
      {
      case'+':
        pounds1 += pounds2;
        shillings1 += shillings2;
        pence1 += pence2;
        break;

      case'-':
        pounds1 -= pounds2;
        shillings1 -= shillings2;
        pence1 -= pence2;
        break;

      case'*':
        pounds1*= pounds2;
        shillings1 *= shillings2;
        pence1 *= pence2;
        break;

      default:
        cout<<"Invalid operator:"<<endl;
        break;
      }
      if(pence1 > 11)
        {
			shillings1 += (pence1/12);
			pence1 = pence1%12;
		}
		if(shillings1 > 19)
		{
			pounds1 += (shillings1/20);
			shillings1 = shillings1%20;
		}
      cout<<"Total amount after calculation is: "<<pounds1<<"."<<shillings1<<"."<<pence1;
      cout<<endl<<"Do you want to calculate again? (y/n) : ";
      cin>>ch;
    }
      while(ch == 'y');
      return 0;
}
