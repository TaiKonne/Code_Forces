
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
#define luvat(x, a) for (auto &x : a)

int main()
{
    int n;
    cin >> n;
    vti a(n);

    luvat(z, a)
    {
        cin >> z;
    }

    sort(a.bg, a.ed);
    int cnt = 0;
    luvr(i, 0, n - 2)
    {
        if (a[i + 1] - a[i] > 1)
            cnt += a[i + 1] - a[i] - 1;
    }
    cout << cnt nl;
}