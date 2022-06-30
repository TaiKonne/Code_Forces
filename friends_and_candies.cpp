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
#define all(r) r.bg(), r.ed()

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        vti a(n);
        int s = 0;
        fat(x, a)
        {
            cin >> x;
            s += x;
        }

        int flag = 0;
        if (s % n != 0)
        {
            flag = 1;
            cout << -1 nl;
        }

        if (flag == 0)
        {
            s /= n;
            int cnt = 0;
            fr(i, 0, n - 1)
            {
                if (s < a[i])
                    cnt++;
            }
            cout << cnt nl;
        }
    }
}