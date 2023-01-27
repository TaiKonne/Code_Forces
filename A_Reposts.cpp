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
// Leave Today for a Better Tomorro

int main()
{
    fast_out();
    int n;
    cin >> n;
    string fl = "";
    map<string, int> mp;
    mp["polycarp"] = 1;
    int Max = 1;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] < 97)
                a[i] += 32;
        }
        for (int i = 0; i < c.sz; i++)
        {
            if (c[i] < 97)
                c[i] += 32;
        }
        int e = mp[c] + 1;
        if (e > Max)
            Max = e;
        mp[a] = e;
    }
    cout << Max;
}