#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll dem = 0;
        while (n > 0)
        {
            if (n % k != 0)
            {
                long long flag = n % k;
                dem += flag;
                n -= flag;
                // cout<<flag<<" ";
            }
            else if (n % k == 0)
            {
                n /= k;
                dem++;
            }
            // if (n == 10)
            //     dem--;
        }
        cout << dem nl;
    }
}