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
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
    
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        char a[101][101];
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = m - 1; j < m; j++)
            {
                if (a[i][j] == 'R')
                {
                    c++;
                    a[i][j] = 'D';
                }
            }
        }
        for (int i = n - 1; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (a[i][j] == 'D')
                {
                    c++;
                    a[i][j] = 'R';
                }
            }
        }
        cout << c << endl;
    }
}