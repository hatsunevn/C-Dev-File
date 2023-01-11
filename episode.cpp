#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("episode.inp","r",stdin);
    freopen("episode.out","w",stdout);
    int n;
    cin >> n;
    int a[n];
    a[n-1] = 0;
    for (int i = 0 ; i < n-1 ; i ++)
    {
        cin >> a[i];
    }

    sort (a,a+n);
    for (int i = 0 ; i < n ; i ++)
    {
        if (i+1 != a[i+1])
        {
            cout << i+1;
            break;
        }
    }
    return 0;
}
