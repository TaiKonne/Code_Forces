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
    int n;
    cin >> n;
    string a;
    cin >> a;
    if (a.sz != 5)
    {
        nope;
        return;
    }
    string b = "Timur";
    fr(i, 0, a.sz - 1)
    {
        fr(j, 0, b.sz - 1)
        {
            if (a[i] == b[j])
            {
                b[j] = '?';
                break;
            }
        }
    }
    int cnt = 0;
    fr(i, 0, b.sz - 1)
    {
        if (b[i] == '?')
            cnt++;
    }
    if (cnt == 5)
    {
        yep;
    }
    else
        nope;
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