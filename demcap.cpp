#include <bits/stdc++.h>

using namespace std;
int n,x,a[100005],d=0;
int main()
{
    freopen("demcap.inp","r",stdin);
    freopen("demcap.out","w",stdout);
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]==x)d++;
        }
    }
    cout<<d;
    return 0;
}
