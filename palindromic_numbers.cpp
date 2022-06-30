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
#define space << " " <<
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define luvr(i, l, r) for (int i = l; i <= r; i++)
#define luvl(i, r, l) for (int i = r; i >= l; i--)
#define wh while

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int Max = 0, Max1 = 0;
        int d = 0, z = 0, q = 0;
        for (int i = 0; i < a.sz; i++)
        {
            Max = max(Max, (int)(a[i] - 48));
            z = z * 10 + (int)(a[i] - 48);
        }
        for (int i = a.sz - 1; i >= 0; i--)
        {
            Max1 = max(Max1, (int)(a[i] - 48));
            q = q * 10 + (int)(a[i] - 48);
        }
        for (int i = 0; i < a.sz; i++)
        {
            d = d * 10 + Max;
        }
        if (z <= 50)
        {
            cout << q nl;
        }
        else if (a.sz == 2)
        {
            if (z % 2 == 0)
                cout << "33" nl;
            else
                cout << "22" nl;
        }
        else if (z == d)
        {
            cout << z nl;
        }
        else
            cout << d - z nl;
    }
}