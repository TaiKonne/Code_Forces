#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define nll cout nl
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
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];

    int cntb = 0;

    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            cin >> a[i][j];
            if (a[i][j] == 'B')
                cntb++;
        }
    }
    int flb = (cntb / 2) + 1;
    cntb = sqrt(cntb);

    int fll = 0;
    fr(i, 1, n)
    {
        fr(j, 1, m)
        {
            if (a[i][j] == 'B')
                fll++;
            if (fll == flb)
            {
                cout << i space << j;
                return 0;
            }
        }
        // nll;
    }
}