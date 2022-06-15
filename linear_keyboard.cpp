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
        string a; // chuỗi đầu
        cin >> a;
        string b; // chuỗi được tìm
        cin >> b;
        int j = 0, s = 0;
        vt c;
        for (int i = 0; i < b.sz - 1; i++)
        {
            s += abs(int(a.find(b[i]) - a.find(b[i + 1])));
        }
        cout << s nl;
    }
}