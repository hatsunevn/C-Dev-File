#include <bits/stdc++.h>

using namespace std;
long long a[1000001],b[1000001];
long long d1,d2,d3,c1,c2,c3;
long long kq(long long n)
{
    if(n<=d1) return c1;
    else if(n<=d2) return c2;
    return c3;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Xebuyt.inp","r",stdin);
    freopen("Xebuyt.out","w",stdout);
    long long n;
    cin>>n>>d1>>d2>>d3>>c1>>c2>>c3;
    long long s,f;
    cin>>s>>f;
    for(long long i=2;i<=n;i++)
    cin>>a[i];
    b[s+1]=kq(a[s+1]-a[s]);
    for(long long i=s+2;i<=f;i++)
    {
        b[i]=b[i-1]+kq(a[i]-a[i-1]);
        for(long long j=s;j<=i;j++)
        if(a[i]-a[j]<=d3) b[i]=min(b[i],b[j]+kq(a[i]-a[j]));
    }
    cout<<b[f];
    return 0;
}