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
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    string a;
    cin >> a;
    int cnt = a.find("po");
    int cnt1 = a.find("desu");
    int cnt11 = a.find("masu");
    int cnt2 = a.find("mnida");
    int Max = max({cnt, cnt1, cnt11, cnt2});

    if ((cnt1 != -1 || cnt11 != -1) && (Max == cnt1 || Max == cnt11))
    {
        cout << "JAPANESE";
    }
    else if (cnt != -1 && Max == cnt)
    {
        cout << "FILIPINO";
    }
    else
    {
        cout << "KOREAN";
    }
    cout nl;
}

int main()
{
    // "po" FILIPINO
    // "DESU" OR "MASU" JAPANESE
    // "MNIDA" KOREAN

    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}