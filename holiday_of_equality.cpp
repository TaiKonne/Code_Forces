#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vta vector<int> a
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define pb push_back
#define bgvt begin()
#define edvt end()

int main()
{
    int t;
    cin >> t;
    int a[t];
    int Max = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        Max = max(a[i], Max);
    }
    sort(a, a + t);
    int s = 0;
    for (int i = 0; i < t; i++)
    {
        if (a[i] < Max)
        {
            s += Max - a[i];
        }
    }
    cout << s;
}