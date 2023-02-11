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

int main()
{
    fast_out();
    string a;
    int n;
    cin >> n >> a;

    map<char, int> mp;
    mp['R'] = 0;
    mp['D'] = 0;
    mp['L'] = 0;
    mp['U'] = 0;
    for (int i = 0; i < a.sz; i++)
    {
        mp[a[i]]++;
    }

    int Min_LR = 1e9, Min_DU = 1e9;
    for (auto x : mp)
    {
        if (x.first == 'R' || x.first == 'L')
            Min_LR = min(Min_LR, x.second);
        else
            Min_DU = min(Min_DU, x.second);
    }
    cout << (Min_DU + Min_LR) * 2;
}