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
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
    
string z = "ALICE";
string z2 = "BOB";
string z3 = "DRAW";
void solve()
{

    int n;
    cin >> n;
    string a;
    cin >> a;
    int cnt0 = 0, cnt1 = 0;
    fr(i, 0, a.sz - 1)
    {
        if (a[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    if (cnt0 % 2 == 0 || cnt0 == 1)
        cout << z2;
    else
        cout << z;
    cout nl;
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