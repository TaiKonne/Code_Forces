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
    cin.tie(NULL);

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        char a[405][405];
        vtpi b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '*')
                    b.push_back({i, j});
            }
        }
        if (b[0].pft == b[1].pft)
        {
            if (b[0].pft == 0)
            {
                a[b[0].pft + 1][b[0].psc] = '*';
                a[b[1].pft + 1][b[1].psc] = '*';
            }
            else
            {
                a[0][b[0].psc] = '*';
                a[0][b[1].psc] = '*';
            }
        }
        else if (b[0].psc == b[1].psc)
        {
            if (b[0].psc == 0)
            {
                a[b[0].pft][b[0].psc + 1] = '*';
                a[b[1].pft][b[1].psc + 1] = '*';
            }
            else
            {
                a[b[0].pft][0] = '*';
                a[b[1].pft][0] = '*';
            }
        }
        else
        {
            sort(b.begin(), b.end());
            a[b[0].pft][b[1].psc] = '*';
            a[b[1].pft][b[0].psc] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout nl;
        }
    }
}