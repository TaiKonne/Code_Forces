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
    string a;
    string b;
    cin >> a >> b;
    int j = 0;
    for (int i = 0; i < b.sz; i++)
    {
        if (b[i] == a[j])
        {
            j++;
        }
    }
    cout << j+1;
}