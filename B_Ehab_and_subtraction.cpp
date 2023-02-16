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
    int n, k;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        a.insert(z);
    }
    int step = 0, s = 0;
    int st = *a.begin();
    for (auto x : a)
    {
        if (k - 1 == -1)
        {
            break;
        }
        if (x - s > 0)
        {
            cout << x - s nl;
            s += (x - s);
        }
        else
            cout << 0 nl;
        k--;
    }
    while (k > 0)
    {
        k--;
        cout << 0 nl;
    }
    /*
    3 3 5 10
    3 3 2 7
    */
}