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
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    int n, d;
    cin >> n >> d;
    int cnt = 0;
    vti b;
    string a;
    fr(i, 1, d)
    {
        int flag = 0;
        cin >> a;
        fr(i, 0, a.sz - 1)
        {
            if (a[i] == '0')
            {
                flag = 1;
                b.pb(1);
                break;
            }
        }
        if (flag == 0)
        {
            b.pb(0);
        }
    }
    int Max = 0;
    int cnt1 = 0;
    fr(i, 0, b.sz - 1)
    {
        if (b[i] == 1)
        {
            cnt1++;
        }
        else if (b[i] == 0)
        {
            cnt1 = 0;
        }
        Max = max(cnt1, Max);
    }
    cout << Max;
}