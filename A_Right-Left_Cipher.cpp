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

void solve()
{
    string a;
    cin >> a;
    if (a.sz == 1)
    {
        cout << a[0];
        return;
    }
    else if (a.sz % 2 == 0)
    {
        int n = (a.sz / 2) - 1;
        int m = n + 1;
        fl(i, n, 0)
        {
            cout << a[i] << a[m];
            m++;
        }
    }
    else if (a.sz % 2 != 0)
    {
        int k = a.sz / 2;
        int x = k;
        int y = k + 1;
        string b = "";
        fr(i, 0, k)
        {
            if (a[x] <= 122 && a[x] >= 97)
            {
                b+=a[x];
            }
            x--;

            if (a[y] <= 122 && a[y] >= 97)
            {
                b+=a[y];
            }

            y++;
        }
        fr(i,0,b.sz-1)
        {
            cout<<b[i];
        }
    }
    return;
    // ncteho
    // 3 4 2 5 1 6
    // teagh
    // ageht
}

int main()
{
    solve();
}