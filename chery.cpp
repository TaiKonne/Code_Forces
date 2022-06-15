#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vtll a;
        // for (auto &it : a)
        //     cin >> a[it];
        while(n--)
        {
            int z;
            cin>>z;
            a.pb(z);
        }
        ll flag = 0;
        for (ll i = 1; i < a.sz; i++)
        {
            flag = max(flag, a[i] * a[i - 1]);
        }
        cout << flag nl;
    }
}