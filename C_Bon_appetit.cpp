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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!
// Leave Today for a Better Tomorrow

void solve()
{
    int n, m;
    cin >> n >> m;
    vti a(n);
    vti b(m);
    map<int, int> mp;
    sort(rall(b));
    fat(x, a)
    {
        cin >> x;
        mp[x]++;
    }
    fat(x, b) cin >> x;
    vector<int> pa;
    fat(x, mp)
    {
        pa.pb(x.second);
    }
    sort(rall(pa));
    int s_table = 0;
    for (int i = 0; i < b.sz; i++)
    {
        if (pa.sz == 0)
            break;
        int fl = pa[0];
        pa.erase(pa.bg);
        if (fl > b[i])
        {
            s_table += b[i];
            pa.pb(fl - b[i]);
            sort(rall(pa));
        }
        else
            s_table += fl;
    }
    cout << s_table nl;

    /*
    m: cái bàn
    ko quá ci khách ngồi chung 1 bàn
    ai: món ăn được vị khách i thích
    ci: dung lượng của bàn thứ i ∑mi=1 ci≥n
    */
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