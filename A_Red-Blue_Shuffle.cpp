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

void tai_kon_cac()
{
    int n;
    cin >> n;
    string a;
    string b;
    cin >> a >> b;

    vti a1;
    vti b1;
    fr(i, 0, a.sz - 1)
    {
        a1.pb((int)(a[i]));
    }
    fr(i, 0, b.sz - 1)
    {
        b1.pb((int)(b[i]));
    }

    int cnta = 0, cntb = 0;
    fr(i, 0, a1.sz - 1)
    {
        if (a1[i] > b1[i])
            cnta++;
        if (a1[i] < b1[i])
            cntb++;
    }

    if (cnta > cntb)
        cout << "RED" nl;
    else if (cnta < cntb)
        cout << "BLUE" nl;
    else
        cout << "EQUAL" nl;
    return;
}

int main()
{
    int t;
    cin >> t;
    wh(t--)
    {
        tai_kon_cac();
    }
}