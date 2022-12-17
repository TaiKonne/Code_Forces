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

void solve()
{
    // bài nhạc của anh ấy bao gồm n nốt nhạc
    // sự đa dạng của bài nhạc là nốt khác nhau
    // tìm số nốt nhạc có thể đổi tối đa ?

    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (a.count(z) == 1)
        {
            z++;
        }
        a.insert(z);
    }
    cout << a.sz nl;
}

int main()
{
    fast_out();
    int t;
    cin >> t;
    wh(t--)
    {
        solve();
    }
}