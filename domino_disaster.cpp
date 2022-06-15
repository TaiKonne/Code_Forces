#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define space << " "

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;

        for(int i = 0;i<a.sz;i++)
        {
            if(a[i]=='U')
            {
                cout<<'D';
            }
            else if(a[i]=='D')
            {
                cout<<'U';
            }
            else
            {
                cout<<a[i];
            }
        }
        cout nl;
    }
}