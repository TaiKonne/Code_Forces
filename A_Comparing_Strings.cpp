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
    string b;
    cin >> a >> b;
    if (a == b)
    {
        yep;
        return 0;
    }
    else if (a.sz != b.sz)
    {
        nope;
        return 0;
    }
    else if (a.sz == 2 && b.sz == 2)
    {
        reverse(a.begin(), a.end());
        if (a == b)
            yep;
        else
            nope;
    }
    else
    {
        int cnt = 0;
        string s = "";
        string s1 = "";
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] != b[i])
            {
                cnt++;
                s += a[i];
                s += b[i];
            }
        }
        if (cnt == 2 && s[0] == s[3] && s[1] == s[2])
        {
            yep;
        }
        else
            nope;
    }
}