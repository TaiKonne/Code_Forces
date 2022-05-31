#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;

    int dem = 0;
    while(n--)
    {
        if(a[n]<91)
            a[n] += 32;
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != a[i - 1])
            dem++;
    }

    if(dem==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}