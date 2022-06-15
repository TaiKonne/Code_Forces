#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define l long
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
        set<int> a;
        int n, s = 0;
        cin >> n;

        while (n--)
        {
            int z;
            cin >> z;
            a.insert(z);
        }
        // for(auto x:a)
        //     cout<<x<<" ";
        cout<<a.sz nl;
    }
}