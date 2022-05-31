#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n = 3;
    while(n--)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());

    cout<<a[2]-a[1]+a[1]-a[0];
    // cout<<a[0]<<a[1]<<a[2];
}