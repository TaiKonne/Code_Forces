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
int n, m;
vti cost;
vector<int> a[100001];
int check[100001];

int dfs(int x)
{
    int Min_cost = cost[x - 1];
    check[x] = 1;
    // cout << x sp << cost[x - 1] nl;
    for (int v : a[x])
    {
        if (check[v] == 0)
        {
            Min_cost = min({cost[v - 1], dfs(v), Min_cost});
        }
    }
    return Min_cost;
}

// punch dfs like chil

//                                :.
//                    ^^^~!777777JY?
//                  ~Y555PGP5555555Y~.
//                :JGP5P55555555Y555J7.                                                        :7.
//               .YGB555555555YYYYYYJJJ                                                       .G#^
//              :YPPGGPP5555YY5GGPYYYYP.                                                 77.  7&J
//             .YP5PPPPP5YJ?!7?JJJ5PPPP^                                             ~~  Y&P:.G#7:.
//            ~5P5555555YJ?!!~!!7?JY5PGG?.                                           Y#J  !BB5#PPGGPY7^
//          .?PP5P55555YJ?77!!7?YYYJJYB##P.                                   ~~:.    7#P: ^P&B: .^7J57 .:^~~!!:
//         ~YP555PPP555YJJ?77!7JPGP5Y5G#BY                                   .P&BGPY7~.~GB~ .Y#P:    .:~!!~~~^~?~
//        !5555555PPPP55YJJ?7777?J555Y?!:                             :!???!^  J#P7?5PGPP##J  !J^.:^~!!~~^^^^~~7Y^
//      ^YGP5555555PPPPP55YJ?77777??J^                              :5BPYJYP#P~ !BP:  .^!?55: .:~!!~~^^^^^~!7?JY5J!^.
//    .7PGPGP555YYY555PP555YJ??7777??:                             :G#!     ~G#? ^G#7      :^~!~~^^^^^~~!7?JY55PP5PGP?.
//    JPPGPPPPP5YYJJJYYYYYYYJ?777777?:                      :!J?~  ~#B:      ~#B. .J5. .:~~!~~^^^^~~!7?JY55PP5PPP5PBGG5~
//   ?P55PGGPPPP5YYJJ????JJ??77777777:                  .^?PBPYP#J  Y&P^    .Y&Y    .^~!~~^^^^^~!!7JYY55YJJY55PPPPGPPPPY
//  ?BP55PPGPP555YYYJJ??7777777777777:                  ^B&5: .?&G?!.!PBPYY5BG?  .^~!~~^^^^~~!7?JYYYJ??7!!7?JY5555555PPY
// ^BBGP55PGGPP5YJJJJJ????7777777777?^                   ^P#YYGGJ7Y#G^ :!77!^..^~!~~^^^~~!7?JY55Y55PG5?7777?JY55PP55555J
// YBGGPPPPPGPPP5Y???7777777777777???:                    .Y&#7   ^B&7     .^~!~^^^^~!7?J?J5P555PGGP5J???JY5PP55555555PY
// !5GGGPPPPPPPP55Y?7777777777777????:                      7#B?JGG5~  .:^~~~^^^~!7?J?!^.  ..^YYYJ????JY55555YYYYYY55PGY
//   ^5GPPP5PPPP555J??7????77777?JJJ7                        ^PGJ~.  :^~~~^^~!7?J?!^.        :?777777??JJJJJJJJJYY55PPPY
//     !GPPPPPPPPP55YJ??????????JJJJ!                             .^~~^^~!7??7~:.            ^???777777????JJJYYYYY55PG5
//      YGPPPPGPPP5555YJ???????????J!                          :^~~~~!777!^:                 ^JJJJ?77777?????????JY5PPG5
//      YBGPPPGGGP5555YJ?JJJJJJ????J~                      .:^~~~!77!~:.                      ?JJJJJ??????????JJY55PPPGY
//      YBGGGGBBBP555YJJYYYYYPPJ?7??^                   .:^~~!!!~^:                           ?JJ???JJJJJJJJYY555PPPPGGY
//      JBGGGGBBGP55YYJJYYYYPGP5?7???!~:             .:^~!!~^:.                              ^JJ???J5PG5YYYJY55PPPPGGGGY
//      ~#BGGGBBGPP5YYJJJJJYPGGPJ???J55Y?!^:      .:^~~~^:.                               .:!YYJ???YPGGG5YYJJY555PGBBGG5
//       ?#BBBBBGPP55YJ???JJJYPPY????~~?YY5YJ~.:^~~^::.                                .:!?Y5YJJ???5PGBG5YYJJY555PPGBBB5
//        !YGB##BGPP5YJ???????J5PYJJ?   .:^!7!^^:.                                    :JYYYJ!:^JJJY5P5YJJJJJYY55PPPGBBB5
//          .^!YP5PP5YJJYJJ????J55YJJ?!!77~:..                                        .!!!:^~7JJJY5PYJ??JJJJYY5PPPPB#BP7
//                !PP5YYY!!~^^:::^~7?JJJJ?J?7:                                         :~7JYYJJJ?~:^~~~~~!7JY55PPPG#Y^.
//                 YPYY7           ~Y?????JJYP^                                       ^PYJJJ???^          .JY5PPP?!^
//                 ?P55~            :!JJJJ?YJ7:                                        !JJJJ?~.           :Y55PG~
//                 :~^^:              :^~~^~:                                           ^!!^.             .~~!!!.
int main() //
{
    fast_out();
    cin >> n >> m;
    ll cost_total = 0;
    fr(i, 0, n - 1)
    {
        int z;
        cin >> z;
        cost.pb(z);
        cost_total += z;
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    if (m == 0)
    {
        cout << cost_total;
        return 0;
    }
    cost_total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == 0)
            cost_total += dfs(i);
    }
    cout << cost_total;
}