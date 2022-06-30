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
#define space << " " <<
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define luvr(i, l, r) for (int i = l; i <= r; i++)
#define luvl(i, r, l) for (int i = r; i >= l; i--)
#define wh while

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        int n;
        cin >> n;
        vti a(n);

        for (auto &x : a)
            cin >> x;

        int dem = 1;
        a.pb(-1);
        int Max = 1;
        luvr(i, 0, a.sz - 2)
        {
            if (a[i] == a[i + 1])
            {
                dem++;
                Max=max(dem,Max);
            }
            if (a[i] != a[i + 1])
                dem = 1;
        }
        cout << Max nl;
    }
}