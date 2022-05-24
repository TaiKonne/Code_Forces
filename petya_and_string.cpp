#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 91)
        {
            a[i] += 32;
        }
        if (b[i] < 91)
        {
            b[i] += 32;
        }
    }
    // int s = 0, s1 = 0;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] != b[i])
    //     {
    //         s = s + (int)(a[i]);
    //         s1 = s1 + (int)(b[i]);
    //         if (s < s1)
    //         {
    //             cout << a[i] << " " << b[i];
    //             cout << -1;
    //             return 0;
    //         }
    //         else if (s1 < s)
    //         {
    //             cout << 1;
    //             return 0;
    //         }
    //     }
    // }
    if (a < b)
    {
        cout << -1;
    }
    else if (b < a)
    {
        cout << 1;
    }
    else
        cout << 0;

    // cout << s << " " << s1;
    // cout << s << " " << s1;
}