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
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
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
    string a;
    cin >> a;
    int cnt = 0;  // x
    int cnt1 = 0; // X
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == 'x')
            cnt++;
        else
            cnt1++;
    }

    if (cnt > cnt1) // x
    {
        int fl = cnt - (n / 2);
        cout << fl nl;
        for (int i = 0; fl != 0; i++)
        {
            if (a[i] == 'x')
            {
                a[i] = 'X';
                fl--;
            }
        }
        for (int i = 0; i < a.sz; i++)
            cout << a[i];
    }
    else if (cnt < cnt1) // x
    {
        int fl = cnt1 - (n / 2);
        cout << fl nl;
        for (int i = 0; fl != 0; i++)
        {
            if (a[i] == 'X')
            {
                a[i] = 'x';
                fl--;
            }
        }
        for (int i = 0; i < a.sz; i++)
            cout << a[i];
    }
    else
    {
        cout << 0 nl;
        for (int i = 0; i < a.sz; i++)
            cout << a[i];
    }
}