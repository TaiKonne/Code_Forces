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
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
    
void solve()
{
    int n, m;
    cin >> n >> m;
    string s = "";
    string s1 = "";
    string s2 = "";
    fr(i, 0, m - 1)
    {
        s += 'B';
        s1 += 'B';
        s2 += 'B';
    }
    vti a(n);
    fat(x, a) cin >> x;
    // fr(i, 0, a.sz - 1)
    // {
    //     int cn = m + 1 - a[i];
    //     s[cn - 1] = 'A';
    //     s[a[i] - 1] = 'A';
    // }

    fr(i, 0, a.sz - 1)
    {
        int cn = m + 1 - a[i];
        s[cn - 1] = 'A';
        // if (a[i] != 1)
            // s[a[i] - 1] = 'A';
    }

    cout << s nl;
}


int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}