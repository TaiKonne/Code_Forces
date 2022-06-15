#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
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
    int dem = 0;
    string ans="";
    while (t--)
    {
        string a;cin>>a;
        for (int i = 0; i < a.sz; i++)
        {
            if (a[i] == 'O' && a[i + 1] == 'O' && dem==0)
            {
                a[i] = '+';
                a[i + 1] = '+';
                dem=1;
            }
        }
        ans+=a+"\n";
    }
    if(dem==1)
    {
        yep;
        cout<<ans;
    }
    else
        nope;
}