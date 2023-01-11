#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("HISO.inp","r",stdin);
    freopen("HISO.out","w",stdout);
    int a[100001],l[100001],n,i,kq=-100000;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    l[1]=a[1];
    for(i=2;i<=n;i++) l[i]=min(l[i-1],a[i]);
    for(i=2;i<=n;i++) kq=max(a[i]-l[i-1],kq);
    cout<<kq;
    return 0;
}
