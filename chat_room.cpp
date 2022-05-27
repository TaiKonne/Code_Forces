#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b = "hello";
    cin >> a;
    int dem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]==b[dem])
        {
            dem++;
        }
        if(dem==5)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}