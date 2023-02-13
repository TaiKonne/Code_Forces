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
string s = "TRIANGLE";
string s1 = "SEGMENT";
string s2 = "IMPOSSIBLE";

bool tri(int a, int b, int c)
{
    if (a + b > c && a + c > b && c + b > a)
    {
        return true;
    }
    return false;
}

bool seg(int a, int b, int c)
{
    if (a + b == c || a + c == b || c + b == a)
    {
        return true;
    }
    return false;
}

int main()
{
    fast_out();
    vti a(4);
    set<int> b;
    fat(x, a)
    {
        cin >> x;
    }
    // 0 1 2 3
    sort(all(a));
    if(tri(a[0],a[1],a[2])==true);
    {
        cout<<s;
    }
    else if(tri(a[0],a[1],a[3])==true)
    {

    }
    else if(tri(a[1],a[2],a[3])=true)
    {

    }


    /*
    1 2 3 4
    4 2 3
    a+b>c;
    a+c>b;
    b+c>a;
    */
}