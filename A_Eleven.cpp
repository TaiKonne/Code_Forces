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

    ll n;
    cin >> n;
    map<int, bool> a;
    ll f1, f2, fn;
    f1 = f2 = fn = 1;
    a[0] = a[1] = true;

    fr(i, 2, n)
    {
        fn = f1 + f2;
        a[fn] = true;
        f1 = f2;
        f2 = fn;
    }

    fr(i, 1, n)
    {
        if (a[i] == true)
            cout << "O";
        else
            cout << "o";
    }
}
