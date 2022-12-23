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
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int fl = ceil(a / (c * 1.0));
    int fl1 = ceil(b / (d * 1.0));
    if (fl + fl1 <= k)
    {
        cout << fl sp << fl1 nl;
    }
    else
        cout << -1 nl;
    // a các bài giảng
    // b tại trường đại học
    // c 1 cây bút có thể viết c bài giảng và bút hết mực
    // d 1 cây bút chì đủ để vẽ tất cả các bản thiết kế trong lớp thực hành d
    // ko quá k các bút,
    // thgloz mún lấy x bút và y bút chì thì chúng vừa đủ
    // với hộp bút khi và chỉ khi x+y<=k
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