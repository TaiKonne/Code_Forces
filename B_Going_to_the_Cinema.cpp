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
int cnt = 0;
void solve()
{
    cnt++;
    int n;
    cin >> n;
    int cnt0 = 0;
    vti a(n);
    fat(x, a)
    {
        cin >> x;
        if (x == 0)
            cnt0++;
    }

    sort(all(a));
    int fl = 0, s = 0;
    for (int i = 1; i < a.sz; i++)
    {
        if (a[i - 1] < i && a[i] >= i + 1)
        {
            s += 1;
        }
    }
    if (cnt0 == 0)
        s += 2;
    else
        s += 1;
    cout << s nl;
    /*
        cs 4:
        0 0 3 3 3
        -1 -1 2 2 2
        cs 2:
        0 1 2 3 4 5 6 7
        case 3:
        0 2 3 3 6 6 7 7

        phụ thuộc vào bao nhiu người đi
        người i nói ai người đi thì đi không kể bản thân
        người i bùn khi < ai người đi hoặc là họ ko đi và ==
        ai người khác đi
        output :
        có bao nhiêu cách chọn 1 nhóm người đi xem sao cho ai không bùn
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