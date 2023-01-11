#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Second.inp","r",stdin);
    freopen("Second.out","w",stdout);
    int n,a[10000],d=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int vt=1;
    while(a[vt]==a[0] && vt<n)vt++;
    if(vt<n)cout<<a[vt];else cout<<"NO";
    return 0;
}
