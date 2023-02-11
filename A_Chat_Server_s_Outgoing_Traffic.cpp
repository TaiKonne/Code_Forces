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
    string a;
    map<string, char> mp;
    int s = 0;
    while (getline(cin, a))
    {
        if (a[0] == '-')
        {
            string fl = a;
            fl[0] = '+';
            mp.erase(fl);
        }
        else if (a[0] == '+')
        {
            mp[a] = a[0];
        }
        else
        {
            int fl1 = 0, fl2 = 0;
            for (int i = 0; i < a.sz; i++)
            {
                if (a[i] == ':')
                {
                    fl1 = 1;
                    continue;
                }
                if (fl1 == 1)
                {
                    fl2++;
                }
            }
            s += fl2 * mp.sz;
            // cout << mp.sz sp << fl2 nl;
        }
    }
    cout << s;
    /*
    b1: quyết định mục tiêu
    b2: xem bản thân mình đã có gì và chưa có gì để có thể hoàn thành mục tiêu đó
    b3: lập kế hoạch cho mục tiêu, thời gian cụ thể làm những việc gì để hướng đến mt
    b4:
    */
}