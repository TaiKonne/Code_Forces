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
    int n, m;
    cin >> n >> m;
    int m1 = 1e5 + 1;
    bool check[m + 1];
    memset(check, false, sizeof(check));
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        // check[x] = true;
    }
    int Max = 0;
    int fl = 1;
    for (int i = 1; i <= m; i++)
    {

        int fl = i;
        while (fl * 2 < m)
        {
            fl *= 2;
            if (a[fl] != 0)
            {
                check[i * 2] = true;
            }
        }
    }

    for (int i = 1; i <= m; i++)
    {
        cout << check[i] sp;
    }
    cout nl;
    /*
    m=7
    3 4 5 6 7


    */

    /*
    có n sinh viên
    có m chủ đề
    một sinh viên được gọi là thành thạo chủ đề t nếu a mod t = 0
    -- nếu không thằng lozz đó là một tân binh
    ps: có thể nói rằng một nhóm sinh viên thanh thạo tất cả chủ đề
        nếu đối với mỗi chủ đề có 1 sv của nhóm thành thạo nó

    output:
        tìm một đội cùng tt all chủ đề sao cho sự khác biệt lớn nhất
        giưa trí thông minh của hai học sinh bất kỳ trong đội đó là nhỏ nhất
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