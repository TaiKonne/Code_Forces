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

int main()
{
    fast_out();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s1 = max(3 * a / 10, a - a / 250 * c);
    int s2 = max(3 * b / 10, b - b / 250 * d);
    if (s1 > s2)
    {
        cout << "Misha";
    }
    else if (s1 < s2)
    {
        cout << "Vasya";
    }
    else
    {
        cout << "Tie";
    }
    /*
    misha giải bài toán tốn a điểm
    vasya giải bài toán tốn b điểm
    c là thời gian gửi bài của misha
    d là thời gian gửi bài của vasya
    */
}