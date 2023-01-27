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

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    map<char, int> mp;
    map<char, bool> mp2;
    // memset(mp2, false, sizeof(mp2));
    int Max = 0, Min = INT_MAX;
    for (int i = 0; i < a.sz; i++)
    {
        mp[a[i]]++;
        mp2[a[i]] = false;
        // Max = max(Max, mp[a[i]]);
    }
    map<int, int> mp1;
    fat(x, mp)
    {
        mp1[x.second]++;
        Max = max(Max, mp1[x.second]);
        Min = min(Min, mp1[x.second]);
    }
    // for (int i = 0; i < a.sz; i++)
    // {
    //     cout << mp[a[i]] sp;
    // }
    int cnt = 0;
    if (mp1.sz == 1)
    {
        cout << cnt nl;
        cout << a nl;
    }
    else
    {
        // if (Min % 2 == 0)
        // {
        //     if (Min != 1)

        //         Min /= 2;
        // }
        // if (Max % 2 == 0 || Max != 1)
        // {
        //     if (Max != 1)
        //         Max /= 2;
        // }

        int fl = (Max / 2, Min / 2);

        // for (int i = 0; i < a.sz; i++)
        // {
        //     if (mp1[mp[a[i]]] == fl * 2)
        //     {
        //         fat(x, mp2)
        //         {
        //             if (x.first != a[i] && x.second == false)
        //             {
        //                 cnt++;
        //                 a[i] = x.first;
        //                 x.second = true;
        //                 break;
        //             }
        //         }
        //     }
        // }

        int i = 0;
        for (; i < a.sz; i++)
        {
            if (fl == mp[a[i]] / 2 && mp2[a[i]] == false)
            {
                fat(x, mp2)
                {
                    if (x.first != a[i] && x.second == false)
                    {
                        cnt++;
                        x.second = true;
                        a[i] = x.first;
                        break;
                    }
                }
            }
        }
        cout << cnt nl;
        cout << a nl;
    }
    // fat(x, mp1)
    // {
    //     cout << x.first sp << x.second nl;
    // }
    // cout nl << "`````" nl;
    /*
    codeforces
    codefofced
    đếm số lần xuất hiện của từ
    sau đó đếm lại số lần xuất hiện giống nhau lớn nhất
    h 1
    e 1
    l 2
    o 1
    ----
    1 3
    2 1

    c 2
    o 2
    d 1
    e 2
    f 1
    r 1
    s 1
    */
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