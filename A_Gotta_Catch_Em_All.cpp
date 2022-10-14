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
    string a;
    cin >> a;
    string b = "";
    string c = "Bulbasaurs";
    map<char, int> mp;
    int cnt = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == 'B'|| a[i] == 'l' || a[i] == 'b' ||
            a[i] == 'a' || a[i] == 's' || a[i] == 'u' || a[i] == 'r')
        {
            mp[a[i]]++;
        }
    }
    // a u s
    // B b l r
    // for (int i = 0; i < mp.sz; i++)
    // {
    //     cout << mp[i] sp;
    // }
    int Min1 = min(mp['a'], mp['u']);
    int Min2 = min({mp['B'], mp['l'], mp['r'], mp['b'], mp['s']});
    cout << min(Min1 / 2, Min2);
}