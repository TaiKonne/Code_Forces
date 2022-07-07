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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        // n số lượng đồng xu
        // c0 số tiền trả 0
        // c1 số tiền trả 1
        // h mỗi lần thay đổi
        string a;
        cin >> a;
        int cnt1 = count(all(a), '1');
        int cnt = count(all(a), '0');

        cout << min({((cnt1 * h) + (n * c0)),
                     ((cnt * h) + (n * c1)),
                     ((cnt * c0) + (cnt1 * c1))});
        cout nl;
    }
}