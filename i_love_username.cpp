#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000];
    int i = 0;
    int dem = 0;

	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
    int Max = a[0], Min = a[0];
	for(int i = 0;i<n;i++)
    {
        if (Max < a[i])
        { 
            dem++;
            Max = a[i];
        }
        if (Min > a[i])
        {
            dem++;
            Min = a[i];
        }
	}
    cout << dem;
}