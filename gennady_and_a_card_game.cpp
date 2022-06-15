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
    string a;
    string b;
    getline(cin,a);
    getline(cin, b);
    int dem = 0;
    for (int i = 0; i < a.sz; i++)
    {
        for (int j = 0; j < b.sz; j++)
        {
            if (a[i] == b[j])
                dem++;
        }
    }
    // cout << (dem == 1 ? "YES" : "NO");
    if (dem != 0)
    {
        yep;
    }
    else
        nope;
}