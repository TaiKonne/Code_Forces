#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vt vector
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
        string s;
        cin >> s;
        int flag = 0;
        if (s.sz % 2 == 0)
        {
            for (int i = 0; i < s.sz / 2; i++)
            {
                if (s[i] != s[i + s.sz / 2])
                {
                    flag = 1;
                }
            }
        }
        else
        {
            flag = 1;
        }
        if(flag==0)
        {
            yep;
        }
        else
            nope;
    }
}