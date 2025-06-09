#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
  unsigned long total = 0;
  char ch;
  cout<<"Enter a number:";
  while (cin.get(ch))
  {
    if(ch=='\n' || ch=='\r')
    {
        break;
    }
    if(ch >= '0'&& ch<='9')
    {
        total=total*10+(ch - '0');
    }
    else
    {
        cout<<"You enter a character:"<<ch<<"You need to enter a number"<<endl;
    }
    cout<<"Number is:"<<total<<endl;
  }
  return 0;
}
