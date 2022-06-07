#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define l long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

void solve()
{
    int n;
    cin >> n;
    
    if (n % 2 == 0)
    {
        n /= 2;
        cout << n nl;
    }
    else if (n % 2 != 0)
    {
        n /= 2;
        cout << n + 1 nl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}