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
string fal = "-1 -1";
int main()
{
    fast_out();
    int m, s;
    cin >> m >> s;
    string a = "", b = "";

    if (s == 0)
    {
        if (m == 1)
        {
            cout << "0 0";
        }
        else
            cout << fal;
        return 0;
    }
    else
    {
        int fl = 0;
        fr(i, 1, m)
        {
            fl = min(s, 9);
            a += fl + '0';
            s -= fl;
        }

        if (s > 0)
        {
            cout << fal;
            return 0;
        }

        // a.erase(a.ed - 1);
        b = a;
        sort(all(b));

        if (b[0] == '0')
        {
            int fl1 = 0, i = 0;
            for (i = 0; b[i] == '0'; i++)
                ;

            b[i]--, b[0]++;
        }

        cout << b sp;

        sort(rall(a));
        cout << a;

        // cout << a[a.sz - 1];
    }
}