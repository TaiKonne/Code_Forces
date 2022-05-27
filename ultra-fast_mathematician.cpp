#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b; 
    int dem = 0;
    while(dem<a.size())
    {
        if(a[dem]==b[dem])
        {
            cout<<0;
        }
        else if(a[dem]!=b[dem])
        {
            cout<<1;
        }
        dem++;
    }
}