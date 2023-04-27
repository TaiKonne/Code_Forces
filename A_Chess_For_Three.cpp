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
    int n;
    cin >> n;
    bool check[4];
    vector<int> a = {0, 1, 2, 3};
    // int fl1 = 0, fl2 = 0;
    // memset(check, false, sizeof(check));
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (a[1] != z && a[2] != z)
        {
            nope;
            return 0;
        }
        if (a[1] == z)
        {
            swap(a[2], a[3]);
        }
        else
        {
            swap(a[1], a[3]);
        }
    }
    yep;
    /*
    1: Alex
    2: Bob
    3: Carl
    */
    /*
    1 2 3
    1 2 = 1
    1 3

    */
}