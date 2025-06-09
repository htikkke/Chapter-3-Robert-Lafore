#include<iostream>
using namespace std;
int main()
{
int num=0;
long long fact=1;
do
{
  cout<<"Enter a number or 0 for exist:";
  cin>>num;
  if(num<0)
  {
      cout<<"Factorial is not defined for negative numbers."<<endl;
  }
  for(int j=num;j>0;j--)
      fact *= j;
      cout<<"Factorial of the"<<num<<"is"<<fact<<endl;
}
  while( num != 0);
  return 0 ;
}
