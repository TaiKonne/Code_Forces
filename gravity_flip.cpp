#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101];
    int i = n;
    while (i--)
    {
        cin >> a[i];
    }
    i++;
    sort(a, a + n);
    while (i < n)
    {
        cout<<a[i]<<" ";
        i++;
    }
}