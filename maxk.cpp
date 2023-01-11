#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("MAXK.inp","r",stdin);
    freopen("MAXK.out","w",stdout);
    int n,k,d=0;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n,greater<int>());
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=a[i+1]) d++;
        if(d==k)
        {
            cout<<a[i];
            return 0;
        }
    }
    return 0;
}