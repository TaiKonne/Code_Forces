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

/* #############################################################
# Nhân quả không nợ chúng ta thứ gì, cho nên xin đừng oán giận #
#                            _                                 #
#                         _ooOoo_                              #
#                        o8888888o                             #
#                        88" . "88                             #
#                        (| -_- |)                             #
#                        O\  =  /O                             #
#                    ____ /'---'\____                          #
#                   '  \|       |// '                         #
#                  '                  '                        #
#                 /   \|||  :  |||//  \                       #
#                /   _||||| -:- |||||_  \                      #
#                |    | \\  -  /// |   |                      #
#                |  \_| '\' --- '/' |   |                      #
#                \   .-\_ '- . -' _/-.  /                      #
#               ___'. .' / --.--\  ', ,'___                    #
#            .""/ <  '.___\_<|>_/___.' _> \"".                 #
#           | | :  '- \'. ;'. _/; .'/ /  .' ; |                #
#           \  \ '-.   \_\_'. _.'_/_/  -' _.' /                #
#============'-.'.__'-. \ \___   /__.-'_.'_.-'=================#
                           '-=--'
Đức Phật nơi đây phù hộ code con chạy không Bug. Nam mô a di đà phật
                        _.-/`)
                       // / / )
                    .=// / / / )
                   // / / / / /
                  ||         /
                   \       /
                    ))    .'
                   //    /
                        / */

void solve()
{
    int a, b;
    cin >> a >> b;
    // 27 -> 4
    // 4 6 9
    if (b > a)
    {
        nope;
        return;
    }
    if (a == b)
    {
        yep;
        return;
    }
    while (true)
    {
        int fl = a / 3;
        if (a == b)
        {
            yep;
            return;
        }
        a -= fl;
    }
    nope;
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