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
#define space << " "

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n1 = 0, n2 = 0, n3 = 0;
        int s = 0;
        while (n--)
        {
            int z;
            cin >> z;
            if (z == 3 || z == 1)
                s++;
        }
        cout << s nl;
    }
}