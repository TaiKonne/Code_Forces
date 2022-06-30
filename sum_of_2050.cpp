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
        if (n % 2050 != 0)
        {
            cout << -1 nl;
            continue;
        }

        n /= 2050;
        ll s = 0;
        while (n != 0)
        {
            s += (n % 10);
            n /= 10;
        }
        cout << s nl;
    }
}