#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int a[100000], b[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[j], a[i]);
                swap(b[i], b[j]);
            }
        }
    }

    // 2 5
    // 1 1
    // 2 1
    // 3 1
    // 4 1
    // 5 1

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " " << b[i] << endl;
    // }
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        if (s > a[i])
        {
            s += b[i];
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}