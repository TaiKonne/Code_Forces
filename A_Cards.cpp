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
    double n, s = 0;
    cin >> n;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
        s += x;
    }
    double avg = (s / n) * 2;
    if (n == 2)
    {
        cout << 1 space << 2;
        return 0;
    }
    fr(i, 0, a.sz - 1)
    {
        if (a[i] != -1)
        {
            fr(j, 0, a.sz - 1)
            {
                if (a[i] + a[j] == avg && i != j)
                {
                    cout << i + 1 space << j + 1 nl;
                    a[i] = -1;
                    a[j] = -1;
                }
            }
        }
    }
    // 1 5 7 4 4 3
    // 6 8 5 5 4
    // 6 12 9 9 8
    // 8 12 11 11 10
    // 5 9 11 8 7
    // 5 9 11 8 7
    // 4 8 10 7 7
    // ==> 8
}