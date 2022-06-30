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
    vti b(n);
    luvat(x, b)
    {
        cin >> x;
    }

    sort(b.bg, b.ed);

    int s = 0;
    luvr(i, 0, b.sz - 1)
    {
        s += b[i + 1] - b[i];
        i += 1;
    }
    cout << s nl;
}