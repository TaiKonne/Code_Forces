#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()

int main()
{
    int n,m;
    cin>>n>>m;
    int flag = n*m;
    while(flag--)
    {
        string a;
        cin>>a;
        if(a[0]=='C'||a[0]=='M'||a[0]=='Y')
        {
            cout<<"#Color";
            return 0;
        }
    }
        cout<<"#Black&White";
}