#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    string d;
    cin >> a >> b >> c;

    d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    // int dem = 0, dem1 = 0;
    // for (int i = 0; i < d.size(); i++)
    // {
    //     if (d[i] != d[i - 1])
    //         dem++;
    // }
    // for (int i = 0; i < c.size(); i++)
    // {
    //     if (c[i] != c[i - 1])
    //         dem1++;
    // }
    // if (dem1 == dem)
    //     cout << "YES";
    // else
    //     cout << "NO";
    if(d.size()!=c.size())
    {
        cout<<"NO";
        return 0;
    }
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] != c[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout<<"YES";
}