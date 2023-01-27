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
const int mod = 1e9 + 7;

// It’s just a bad day, not a bad life!
// Leave Today for a Better Tomorrow

int main()
{
    fast_out();
    vector<string> a;
    int Max = 0;
    string s;
    int c = 0;
    while (getline(cin, s))
    {
        a.pb(s);
        Max = max((int)s.sz, Max);
    }

    for (int i = 0; i < Max + 2; i++)
    {
        cout << "*";
    }
    cout nl;

    for (int i = 0; i < a.sz; i++)
    {
        int fl = (Max - a[i].sz);
        if (a[i].sz == 0 || a[i].sz == Max)
        {
            if (a[i].sz == 0)
            {
                cout << '*';
                for (int j = 0; j < Max; j++)
                {
                    cout << ' ';
                }
                cout << '*' nl;
            }
            else
            {
                cout << '*';
                cout << a[i];
                cout << '*' nl;
            }
            continue;
        }

        else if (fl % 2 == 0)
        {
            cout << "*";
            for (int j = 0; j < fl / 2; j++)
            {
                cout sp;
            }
            cout << a[i];
            for (int j = 0; j < fl / 2; j++)
                cout sp;
            cout << '*' nl;
        }
        else
        {
            c++;
            cout << '*';
            if (c % 2 == 0)
            {
                for (int j = 0; j < fl / 2 + 1; j++)
                {
                    cout sp;
                }
                cout << a[i];
                for (int j = 0; j < fl / 2; j++)
                    cout sp;
                cout << '*' nl;
            }
            else
            {
                for (int j = 0; j < fl / 2; j++)
                {
                    cout sp;
                }
                cout << a[i];
                for (int j = 0; j < fl / 2 + 1; j++)
                    cout sp;
                cout << '*' nl;
            }
        }
    }

    for (int i = 0; i < Max + 2; i++)
    {
        cout << "*";
    }
}