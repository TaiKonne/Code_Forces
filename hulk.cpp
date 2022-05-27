#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=1;
    while(m<=n)
    {
        if(m%2==0)
        {
            cout<<"I love ";
        }
        else if(m%2!=0) 
            cout<<"I hate ";
        if(m!=n)
            cout<<"that ";
        else if(m==n)
            cout<<"it ";
        m++;
    }
}