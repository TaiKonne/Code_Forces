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

int main()
{
    fast_out();
    int n;
    cin >> n;
    string a;
    cin >> a;
    int fl = 0;
    string b = "                                                                                                                                                                                                                                                                    ";
    for (int i = 0; i < n; i++)
    {
        int fl1 = 0;
        if (a[i] == 'o' && a[i + 1] == 'g' && a[i + 2] == 'o')
        {
            fl1 = 1;
            while (a[i] == 'o' && a[i + 1] == 'g' && a[i + 2] == 'o')
                i += 2;
        }
        if (fl1 == 1)
        {
            b[fl++] = '*';
            b[fl++] = '*';
            b[fl++] = '*';
        }
        else
            b[fl++] = a[i];
    }
    cout << b;

}