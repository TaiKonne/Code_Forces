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

int main()
{
    fast_out();
    int n, m;
    cin >> n >> m;
    vti a(n);
    vti b(m);
    int min1 = mod;
    int min2 = mod;
    int aa[11] = {0}, bb[10] = {0};
    fr(i, 0, n - 1)
    {
        cin >> a[i];
        aa[a[i]]++;
        min1 = min(min1, a[i]);
    }
    fr(i, 0, m - 1)
    {
        cin >> b[i];
        min2 = min(min2, b[i]);
        bb[b[i]]++;
    }
    if (min1 == min2)
    {
        cout << min1;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            if (aa[i] > 0 && bb[i] > 0)
            {
                cout << i;
                return 0;
            }
        }
        if (min1 > min2)
        {
            swap(min1, min2);
        }
        cout << min1 << min2;
    }
}