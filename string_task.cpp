#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    for (int i = 0; i < (int)a.size(); i++)
    {
        while (a[i] == ' ' && a[i + 1] == ' ')
            a.erase(i, 1);
        while (a[0] == ' ')
            a.erase(0, 1);
        if (a[i + 1] == '\0' && a[i] == ' ')
        {
            while (a[i] == ' ')
            {
                a.erase(i, 1);
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]<91)
        {
            a[i] += 32;
        }
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='y'||a[i]=='u')
        {
            continue;
        }
        else
        {
            cout<<".";
            cout<<a[i];
        }
    }
}