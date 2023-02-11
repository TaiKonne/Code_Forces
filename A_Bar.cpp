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
const ll IFN = 1e18;
// It’s just a bad day, not a bad life!
// Leave Today for a Better Tomorrow

int change_to_int(string x)
{
    int s = 0;
    for (int i = 0; i < x.sz; i++)
    {
        s = s * 10 + (int)(x[i] - '0');
    }
    return s;
}

int main()
{
    fast_out();
    string a[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int n;
    cin >> n;
    int cnt = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] >= '1' && s[0] <= '9')
        {
            int age = change_to_int(s);
            if (age < 18)
                cnt++;
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                if (s == a[i])
                    cnt++;
            }
        }
    }
    cout << cnt;
}