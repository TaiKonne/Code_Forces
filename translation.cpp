#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    int n = b.size();
    int m = 0;

    for(int i = 0;i<a.size();i++)
    {
        if(a[i]!=b[a.size()-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}