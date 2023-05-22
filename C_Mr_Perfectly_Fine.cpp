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
    int n;
    cin >> n;

    vector<int> motmot;
    vector<int> motkhong;
    vector<int> khongmot;

    int all = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        string fl;
        cin >> x >> fl;
        if (fl == "11")
            motmot.push_back(x);
        else if (fl == "10")
            motkhong.push_back(x);
        else if (fl == "01")
            khongmot.push_back(x);
    }
    sort(all(motmot));
    sort(all(motkhong));
    sort(all(khongmot));
    int Min = mod;
    if (motmot.sz > 0)
    {
        Min = min(motmot[0], Min);
    }

    if (khongmot.sz > 0 && motkhong.sz > 0)
    {
        Min = min(khongmot[0] + motkhong[0], Min);
    }
    if (Min != mod)
    {
        cout << Min nl;
        return;
    }
    cout << -1 nl;
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