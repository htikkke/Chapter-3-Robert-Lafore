#include <iostream>

using namespace std;

int main()
{
    int choice;
    float f,c;
    cout<<"1.To convert Fahrenheit to Celsius: \n2.To convert Celsius to Fahrenheit: \nChoice!"<<endl;
    cin>>choice;
    switch(choice)
    {
      case 1:
      cout<<"Enter temperature in Fahrenheit:"<<endl;
      cin>>f;
      c = (f - 32) * 5 / 9;
      cout<<"In Celsius:"<<c;
      break;

      case 2:
      cout<<"Enter temperature in Celsius:"<<endl;
      cin>>c;
      f = (1.8 * c) + 32;
      cout<<"In Fahrenheit:"<<f;
      break;

      default:
        cout << "Check the input value and try again either 1 or 2";
      break;
    }
      return 0;
}



