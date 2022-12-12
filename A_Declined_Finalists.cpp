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

int main()
{
    fast_out();
    int n;
    cin >> n;

    int Max = 0;
    fr(i, 0, n - 1)
    {
        int z;
        cin >> z;
        Max = max(Max, z);
    }
    if (Max > 25)
        cout << Max - 25;
    else
        cout << 0;
    return 0;
    // nếu một thí sinh từ chối thì sẽ có một thí sinh khác
    // có thứ hạn cao nhất được mời đến
    // k là số người lọt vào vòng trong
    // có 25 người được mời
    // sẽ mời từ người có hạng là 1
    // vậy nếu người thứ 26 sẽ là người được mời ngoài top 25 nên sẽ có 1 người từ chối
}