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
#define space << " "
#define vtpi vector<pair<int, int>>
#define pft first
#define psc second
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), e.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    long double n, k;
    cin >> n >> k;
    // 2 red 5 green 8 blue sheets
    //  mỗi quyển chỉ có 1 màu với k trang tính
    //  mỗi sổ chứa k trang tính màu đỏ,xanh,xanh lam
    //  3 5
    //  2*3 5*3 8*3
    //  2 3 5
    ll fl = ceil(n * 2 / k) + ceil(n * 5 / k) + ceil(n * 8 / k);
    cout << fl;
}