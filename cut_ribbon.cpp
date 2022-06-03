#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int i = 3;

    while (i--)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());
    if (a[0] == 1)
    {
        cout << n;
        return 0;
    }
    else if (n % 2 == 0 && a[0] % 2 != 0)
    {
        cout << n / a[0];
        return 0;
    }
    int s = 0, dem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (s != n)
        {
            if (s < n)
            {
                s += a[i];
                dem++;
            }
            else if (s > n)
            {
                i = 0;
                s -= a[i];
            }
        }
        else if (s == n)
        {
            cout << dem;
            return 0;
        }
    }
    // cout << dem;
}