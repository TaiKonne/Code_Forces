#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int c = a%b; 
        if(c!=0)
        {
            cout<<b-c<<'\n';
        }
        else 
            cout<<c<<endl; 
        
    }
}