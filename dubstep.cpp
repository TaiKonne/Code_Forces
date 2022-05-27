#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string b = "WUB";
    int k = 0;
    int m = 1;

    // for(int i = 0;i<=a.size()+1;i++)
    // {
    //     a[m] = a[i];
    //     m++;
    // }

    for (int i = 0; i <= a.size(); i++)
    {
        if (a[i] == b[k])
        {
            k++;
        }
        if (k == 3)
        {
            a.erase(i - 3, 3);
        }
    }
    for (int i = 1; i <= m; i++)
    {
        cout << a[i] << " ";
    }
}