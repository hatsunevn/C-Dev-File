#include <bits/stdc++.h>

using namespace std;
long long a[1000001];
int main()
{
    freopen("ANTS.inp","r",stdin);
    freopen("ANTS.out","w",stdout);
    long long n,k,kq=0;
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        if(a[i]<0) kq=max(kq,abs(a[i]));
        else kq=max(kq,k-a[i]);
    }
    cout<<kq;
    return 0;
}
