#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    int vtmin = 100000, vtmax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vtmin = min(vtmin, a[i]);
        vtmax = max(vtmax, a[i]);
    }
    // tim vi tri min

    int vtimin = 0, vtimax = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == vtmin)
        {
            vtimin = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == vtmax)
        {
            vtimax = i;
            break;
        }
    }

    int s1 = 0, s = 0;

    if (vtimin < vtimax)
    {
        vtimin = (n - 1) - vtimin;
        cout << vtimax - 1 + vtimin;
    }
    else
    {
        vtimin = (n - 1) - vtimin;
        cout << vtimax + vtimin;
    }

}