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
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

string s = "Still Rozdil";

int main()
{
    fast_out();
    int n;
    cin >> n;
    ll Min = 10000000001;
    int cnt = 0, fl = 0;

    vti a(n);
    fat(x, a) cin >> x;
    fr(i, 0, a.sz - 1)
    {
        if (a[i] < Min)
        {
            cnt = 1;
            Min = a[i];
            fl = i + 1;
        }
        else if (Min == a[i])
        {
            cnt++;
        }
    }

    if (cnt == 1)
    {
        cout << fl;
    }
    else
    {
        cout << s;
    }
}