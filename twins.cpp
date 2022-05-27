#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    
    sort(a, n + a);
    int s1 = 0;
    int dem = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s1 <= s)
        {
            s1 += a[i];
            s -= a[i];
            dem++;
        }
        if (s1 > s)
        {
            cout << dem;
            return 0;
        }
    }
}