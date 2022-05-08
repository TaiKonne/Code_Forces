#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[10000];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int dem = 0;
    // sort(a,a+n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= a[k] && a[k] > 0)
        {
            dem++;
        }
    }
    cout << dem;
}
