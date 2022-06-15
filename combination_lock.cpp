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
    int n; // 0 1 2 3 4 5 6 7 8 9
    string a;
    string b;
    cin >> n;
    cin >> a >> b;
    int s = 0;
    for (int i = 0; i < a.sz; i++)
    {
        s += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << s;
}