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
    int n, a, b;
    cin >> n >> a >> b;
    vti A(n);
    int s = 0;
    fat(x, A)
    {
        cin >> x;
        s += x;
    }
    sort(A.begin() + 1, A.end());
    int fl = A[0];
    int cnt = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (fl * a / s >= b)
        {
            break;
        }
        s -= A[i];
        cnt++;
    }
    cout << cnt;
    /*
    muốn tưới 1 bông hoa duy nhất là em
    anh chỉ có thể sử dụng 1 lỗ đầu tiên để tưới choa iem
    anh có thể chặn 1 số lỗ đó em
    a lít nước
    b lưu lượng nước mà anh mún đổ vào em
    anh phải chặn bao nhiêu lỗ vì em


    */
}