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

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        // if (b > a)
        //     swap(a, b);
        ll s = 0, dem = 0;
        while (a <= n || b <= n)
        {
            if (a < b)
            {
                dem++;
                a += b;
            }
            else
            {
                dem++;
                b += a;
            }
            if (a > n || b > n)
            {
                cout << dem nl;
                break;
            }
        }
        // cout << dem - 1 nl;
    }
}