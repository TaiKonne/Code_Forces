#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[10000];
    cin >> n;
    int x[10000];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i)
    {
        a[x[i]] = i + 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
}