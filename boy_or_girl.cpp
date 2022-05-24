#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem = 0;

    for (int i = 0; i < s.size()-1; i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if(s[i]==s[j])
            {
                dem++;
                break;
            }
        }
    }
    // cout<<s.size()-dem;
    if((s.size()-dem)%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

}