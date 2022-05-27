#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    int hoa = 0,hoa1=0, thuong = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[0]<91)
            hoa++;
        if(a[i]<91)
            hoa1++;
        if(a[i]>91)
            thuong++;
    }

    if(hoa1==a.size())
    {
        for(int i = 0;i<a.size();i++)
        {
            a[i] += 32;
        }
        cout<<a;
        return 0;
    }
    else if(thuong>1)
    {
        cout<<a;
        return 0;
    }
    else if(hoa1!=a.size()&&a[0]<91)
    {
        cout<<a;
        return 0;
    }
    else if(thuong==1)
    {
        for(int i = 0;i<a.size();i++)
        {
            if(a[0]>91)
                a[0] -= 32;
            else
                a[i] += 32;
        }
        cout<<a;
        return 0;
    }

}