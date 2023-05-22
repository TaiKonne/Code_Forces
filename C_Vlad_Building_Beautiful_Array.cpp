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
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())*/
void solve()
{
    int n;
    cin >> n;
    vti a(n);
    int chan = 0, le = 0;
    fat(x, a)
    {
        cin >> x;
        if (x % 2 == 0)
            chan++;
    }
    le = n - chan;
    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 != a[i + 1] % 2)
        {
            ok = true;
            break;
        }
    }
    if (ok == false)
    {
        yep;
    }
    else
    {
        sort(all(a));
        int fl = a[0];
        if (fl % 2 == 0)
            nope;
        else
            yep;
    }
    /*

    Để xây dựng mảng b, Vlad có thể gán cho mỗi bi giá trị ai hoặc ai−aj,
     trong đó có thể chọn bất kỳ j nào từ 1 đến n.
    */
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