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
    string a;
    string b;
    cin >> a;
    int fl1 = 0, fl2 = 0;
    a += '?';
    b = a;

    fr(i, 0, a.sz - 2)
    {
        if (a[i] == 'A' && a[i + 1] == 'B')
        {
            a[i] = '0';
            a[i + 1] = '0';
            break;
        }
    }
    fr(i, 0, a.sz - 2)
    {
        if (a[i] == 'B' && a[i + 1] == 'A')
        {
            a[i] = '0';
            a[i + 1] = '0';
            break;
        }
    }

    fl(i, b.sz - 2, 0)
    {
        if (b[i] == 'A' && b[i + 1] == 'B')
        {
            b[i] = '0';
            b[i + 1] = '0';
            break;
        }
    }
    fl(i, b.sz - 2, 0)
    {
        if (b[i] == 'B' && b[i + 1] == 'A')
        {
            b[i] = '0';
            b[i + 1] = '0';
            break;
        }
    }
    int cnt = count(all(a), '0');
    int cnt1 = count(all(b), '0');
    if (cnt == 4 || cnt1 == 4)
        yep;
    else
        nope;
}