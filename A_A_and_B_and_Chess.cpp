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
    char a[8][8];
    map<char, int> mp;
    mp['q'] = 9;
    mp['Q'] = 9;
    mp['r'] = 5;
    mp['R'] = 5;
    mp['B'] = 3;
    mp['b'] = 3;
    mp['K'] = 3;
    mp['k'] = 3;
    mp['p'] = 1;
    mp['P'] = 1;
    int s1 = 0, s2 = 0;
    fr(i, 0, 7)
    {
        fr(j, 0, 7)
        {
            cin >> a[i][j];
            if (a[i][j] == 'K' || a[i][j] == 'k')
                continue;
            if (a[i][j] > 'Z')
            {
                s2 += mp[a[i][j]];
            }
            else
            {
                s1 += mp[a[i][j]];
            }
        }
    }
    if (s1 > s2)
    {

        cout << "White";
    }
    else if (s1 < s2)
    {

        cout << "Black";
    }
    else
        cout << "Draw";
}