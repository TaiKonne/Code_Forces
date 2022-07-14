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
        int n;
        cin >> n;

        vti a(n);
        fat(x, a) cin >> x;
        fr(i, 0, a.sz - 1)
        {
            int z;
            cin >> z;
            string a1;
            cin >> a1;
            int u = 0;
            int d = 0;
            fr(j, 0, a1.sz - 1)
            {
                if (a1[j] == 'D')
                {
                    d++;
                }
                else
                {
                    u++;
                }
            }
            int cnt = abs(d - u);
            string c = to_string(cnt);
            if (d > u)
            {
                a[i] += cnt;
            }
            else if (u > d)
            {
                a[i] -= cnt;
            }

            if (a[i] < 0)
            {
                cout << 10 + a[i] space;
            }
            else
            {
                cout << a[i] % 10 space;
            }
        }
        cout nl;
    }
}