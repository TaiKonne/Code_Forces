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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    int n;
    cin >> n;
    vti a(n);
    fat(x, a) cin >> x;
    int Min = *min_element(all(a));
    int Max = *max_element(all(a));
    int minn = 0, maxx = 0;

    fr(i, 0, a.sz - 1)
    {
        if (a[i] == Min)
            minn = i;
        if (a[i] == Max)
            maxx = i;
    }
    // trai
    // phai
    minn++;
    maxx++;
    // cout << Min space << Max nl;
    // cout << minn space << maxx nl;

    if (minn == 1 || maxx == 1 || minn == n || maxx == n)
    {
        cout << n - 1;
    }
    else
    {
        // cout << max({(n - minn), (n - maxx), (n - minn + 1 + maxx)});
        cout << max({(n - minn), (n - maxx), max(minn - 1, maxx - 1)});
    }
}