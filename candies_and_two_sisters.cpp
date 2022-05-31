#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 10
    // 5 4
    // 6 3
    // 7 2
    // 8 1

    while (n--)
    {
        int a;
        cin>>a;
        if(a%2!=0)
        {
            a-=1;
            cout<<a/2<<'\n';
        }
        else if(a%2==0)
        {
            cout<<a/2-1<<'\n';
        }
    }
}