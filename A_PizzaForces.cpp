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
    ll n;
    cin >> n;
    ll s = 0;
    if (n <= 6)
    {
        cout << 15 nl;
        return;
    }
    else if (n <= 8)
    {
        cout << 20 nl;
        return;
    }
    else if (n <= 10)
    {
        cout << 25 nl;
        return;
    }
    if (n % 2 != 0)
        n++;
    // 6:15
    // 8:20
    // 10:25
    // thời gian nướng của đơn hàng là tổng thời gian nướng của tất cả
    // cả loại pizza trong đơn
    // task: số phút tối thiểu cần để tổng ít nhất n lát
    // ta có mỗi bánh có thời gian trung bình nướng là 2.5p
    // vì thế n*2.5
    s = n * 2.5;
    cout << s nl;
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