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

void taikoncac()
{
    int n, k;
    cin >> n >> k;
    // int fl = max(n, k) / min(n, k);
    int cnt = 0;
    fr(i, 0, n)
    {
        fr(j, 0, k - 1)
        {
            cnt++;
            cout << char('a' + j);
            if (cnt == n)
            {
                break;
            }
        }
        if (cnt == n)
        {
            break;
        }
    }

    cout nl;
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        taikoncac();
    }
}