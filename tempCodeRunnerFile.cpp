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

void solve()
{
    int n;
    cin >> n;
    vti a(n);
    int s = 0;
    fr(i,0,n-1)
    {
    	int x;
    	cin>>x;
        a.pb(x);
        s += x;
    }

    int cnt = 0;
    int s1=a[a.sz-1];
    s -=s1;
    int fl = 0;
    wh(true)
    {
        cnt++;
        fr(i, 0, a.sz - 1)
        {
            if (a[i]>0)
            {
                a[i] -= 1;
                a[i + 1]++;
                break;
            }
            if (a[a.sz - 1] == s)
            {
                // cout << cnt nl;
                break;
            }
        }
        if (a[a.sz - 1] == s)
        {
            cout << cnt-s1 nl;
            break;
        }
    }
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