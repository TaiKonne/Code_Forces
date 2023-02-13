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

void solve()
{
    int n;
    cin >> n;
    vti a(n);
    int Min = 1e9, Max = 0;
    int k = 0;
    fat(x, a)
    {
        k++;
        cin >> x;
        Min = min(Min, x);
        Max = max(Max, x);
    }

    int Max1 = a[n - 1] - a[0];
    for (int i = 0; i < n - 1; i++)
    {
        Max1 = max(Max1, a[i] - a[i + 1]);
    }
    cout << max({Max1, Max - a[0], a[n - 1] - Min}) nl;

    /*
    2 1 4 5 3

    */
    /*
    chọn 1 phân đoạn bất kì
    - thực hiện chính xác 1 lần
        chọn 2 số nguyên l, r và một số nguyên dương k bất kì
        lập lại điều này k lần al=al+1,al+1=al+2,...
    output: tìm max value của (an-a1)
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