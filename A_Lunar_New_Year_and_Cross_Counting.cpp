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
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fast_out();
    int n;
    cin >> n;
    char a[n + 2][n + 2];
    fr(i, 1, n)
    {
        fr(j, 1, n)
                cin >>
            a[i][j];
    }

    int cnt = 0;

    fr(i, 1, n)
    {
        fr(j, 1, n)
        {
            if (a[i][j] == a[i - 1][j - 1] && a[i][j] == a[i - 1][j + 1] && a[i][j] == a[i + 1][j - 1] && a[i][j] == a[i + 1][j + 1] && a[i][j] == 'X')
                cnt++;
        }
    }
    cout << cnt;
}