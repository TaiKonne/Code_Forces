#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101], b[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    //1 2 3
    //2 4 4
    
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j])
            {
                dem++;
                continue;
            }
        }
    }
    cout<<dem;
}