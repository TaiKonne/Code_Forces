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

int main()
{
    fast_out();
    string a;
    getline(cin, a);
    reverse(all(a));
    int fl1 = 0, fl2 = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] >= 97)
            a[i] -= 32;
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y')
            {
                fl1++;
            }
            else if (a[i] != 'A' || a[i] != 'E' || a[i] != 'I' || a[i] != 'O' || a[i] != 'U' || a[i] != 'Y')
            {
                fl2++;
            }
            if (fl1 > fl2)
            {
                yep;
                return 0;
            }
            if (fl2 > fl1)
            {
                nope;
                return 0;
            }
            // cout << fl1 sp << fl2 nl;
        }
    }
    cout << a;
}