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
//<a><b><c></c></b></a>
int main()
{
    fast_out();
    string a;
    cin >> a;
    int l = 0, r = 0;
    vector<string> div;
    string div3 = "";
    map<char, int> div2;
    string fl = "";

    while (r < a.sz)
    {
        if (a[r] >= 'a' && a[r] <= 'z')
        {
            div2[a[r]] = 0;
            div3 += a[r];
        }
        fl += a[r];
        if (a[r] == '>')
        {
            l = r + 1;
            div.pb(fl);
            fl = "";
        }
        r++;
    }

    bool check[125];
    memset(check, false, sizeof(check));

    int cntdiv = -2;
    for (int i = 0; i < div3.sz; i++)
    {
        string fl1 = div[i];
        if (fl1[fl1.sz - 3] != '/')
            cntdiv += 2;
        for (int j = 1; j <= cntdiv; j++)
            cout sp;
        if (fl1[fl1.sz - 3] == '/')
            cntdiv -= 2;
        cout << div[i] nl;
    }
}