#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	
	for(int i = 0;i<m;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+m);
	int Min=1000000;
	int r=m/2;
	int l=0;
	for(int i = 0;i<=m-n;i++)
	{
		Min = min(Min,a[i+n-1]-a[i]);
	}
	cout<<Min;
}