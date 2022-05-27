#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string b = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 96 && a[i] < 123)
        {
            b += a[i];
        }
    }
    sort(b.begin(),b.end());
    int dem=0;
    for (int i = 0; i < b.size(); i++)
    {
        if(b[i]!=b[i-1])
            dem++;
    }
    cout<<dem;
}