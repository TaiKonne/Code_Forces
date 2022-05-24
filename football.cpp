#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int dem = 1, dem1 = 1;
    int Max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[i + 1])
        {
            dem++;
            Max=max(dem,Max);
        }
        else if (a[i] != a[i + 1])
        {
            dem = 1;
        }
    }
    if(Max>=7)
        cout<<"YES";
    else
        cout<<"NO";
}