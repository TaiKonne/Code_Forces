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
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int Min=1000000009,Max=0;
        while(a--)
        {
            int b;
            cin>>b;
            Min = min(Min,b);
            Max = max(Max,b);
        }
        cout<< Max - Min nl;
    }
}