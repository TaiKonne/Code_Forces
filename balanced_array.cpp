#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector<int>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bg begin()
#define ed end()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 4 != 0)
        {
            nope;
        }
        else
        {
            int s=0,s1=0;
            yep;
            for (int i = 2; i <= a; i += 2)
            {
                cout << i << " ";
                s+=i;
            }
            for (int i = 1; i <= a - 2; i += 2)
            {
                cout << i << " ";
                s1+=i;
            }
            // cout<<
            cout<< s-s1 nl;
        }
    }
}