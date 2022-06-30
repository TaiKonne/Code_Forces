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
    int n, m;
    cin >> n;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
    }
    cin >> m;
    vti b(m);
    fat(x, b)
    {
        cin >> x;
    }
    int Max1 = *max_element(a.bg, a.ed);
    int Max2 = *max_element(b.bg, b.ed);

    cout << Max1 space << Max2;
}