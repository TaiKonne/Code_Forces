#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            d1++;
        }
        else if (t == 2)
            d2++;
        else if (t == 3)
            d3++;
        else
            d4++;
    }

    int s = 0;
    // 1 1 1 1 2 2 2 2 2
    if (d3 > d1)
    {
        s += d1;
        d3 = d3 - d1;
        d1 = 0;
    }
    else if (d3 == d1)
    {
        s += d3;
        d3 = 0;
        d1 = 0;
    }
    else if (d3 < d1)
    {
        s += d3;
        d3 = 0;
        d1 = d1 - d3;
    }
    if (d2 > d1)
    {
        s += d1;
        d2 = d2 - d1;
        d1 = 0;
    }
    else if (d2 == d1)
    {
        s += d2;
        d2 = 0;
        d1 = 0;
    }
    else if(d2<d1)
    {
        s += d2;
        d1 = d1 - d2;
        d2=0;
    }
    if(d2%4==0)
    {
        s += d2/4;
    }
    cout << s<<" "<<d1<<" "<<d2<<" "<<d3;
}