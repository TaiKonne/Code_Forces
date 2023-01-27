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
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << '0' sp << x + y sp << x + y sp << '0';
    }
    else if (x < 0 && y < 0)
    {
        cout << x + y << " 0 0 " << y + x;
    }
    else if (x > 0 && y < 0)
    {
        cout << "0 " << y - x << " " << x - y << " 0";
    }
    else
    {
        cout << x - y << " 0 0 " << y - x;
    }
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
}