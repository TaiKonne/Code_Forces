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
    int n;
    cin >> n;
    string a;
    cin >> a;
    int dem = 0;
    for (int i = 0; i < a.sz; i++)
    {
        if (a[i] == 'x' && a[i + 1] == 'x' && a[i + 2] == 'x')
        {
            dem++;
            a.erase(i + 1, 0);
        }
    }
    cout << dem;
}