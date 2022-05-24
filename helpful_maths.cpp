#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> a;
    // int dem = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '3' || s[i] == '1' || s[i] == '2')
        {
            int t = (int)(s[i] - 48);
            a.push_back(t);
            // dem++;
        }
    }

    int dem = s.size()-a.size();

    sort(a.begin(),a.end());

    for (int i = 0; i < a.size(); i++)
    {
        if(dem>0)
        {
            cout<<a[i];
            cout<<"+";
            dem--;
        }
        else
            cout<<a[i];
    }
    // cout<<'\n'<<dem;
}