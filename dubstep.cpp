#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b = "";
    cin >> a;
    int k = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            i += 2;
            b+=" ";
            continue;
        }
        else
        {
            b+=a[i];
        }
    }
    cout<<b;
}