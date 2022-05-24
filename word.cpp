#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int hoa = 0, thuong = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 91)
            hoa++;
        else if (a[i] > 96)
            thuong++;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (hoa > thuong)
        {
            if (a[i] > 96)
                a[i] -= 32;
        }
        else if (hoa <= thuong)
        {
            if (a[i] < 91)
                a[i] += 32;
        }
    }
    cout<<a;
}