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
    int t;
    cin >> t;
    wh(t--)
    {
        char a[8][8];

        fr(i, 0, 7)
        {
            fr(j, 0, 7)
            {
                cin >> a[i][j];
            }
        }
        int flag1 = 0, flag2 = 0;
        fr(i, 0, 7)
        {
            int cnt = 0;
            fr(j, 0, 7)
            {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#')
                {
                    flag1 = 1;
                    cout << i + 1 space << j + 1 nl;
                    break;
                }
            }
            if (flag1 == 1)
                break;
        }
        // cout nl;
    }
}