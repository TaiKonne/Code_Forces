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
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    string a;
    cin >> a;

    int Min = 99999999;

    int cnt1 = 99999999, cnt2 = 99999999, cnt3 = 99999999;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == '1')
            cnt1 = i;
        if (a[i] == '2')
            cnt2 = i;
        if (a[i] == '3')
            cnt3 = i;
        Min = min(Min, max({cnt1, cnt2, cnt3}) - min({cnt1, cnt2, cnt3}) + 1);
    }

    if (Min > 200000)
        cout << 0 nl;
    else
        cout << Min nl;
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}