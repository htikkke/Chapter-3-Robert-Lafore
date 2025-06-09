
#include<iostream>

using namespace std;

int main()
    {
        int i,j,k,m;
        for(i=1;i<=20;i++)
        {
            for(j=20;j>=i;j--)
            {
                cout<<" ";
            }
            for(k=1;k<2*i;k++)
            {
                cout<<"*";
            }
            for(m=20;m>=i;m--)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
