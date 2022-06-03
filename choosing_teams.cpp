#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vta vector<int> a
#define ys cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define db double
#define p_b push_back
#define bgvt begin()
#define edvt end()

int main()
{
    int n, k;
    cin >> n >> k;
    vta;
    while (n--)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }

    int dem = 0;
    sort(a.bgvt, a.edvt);

    for (int i = 0; i < a.size(); i++)
    {
        if (5 - a[i] >= k)
            dem++;
    }
    cout << dem / 3;
}