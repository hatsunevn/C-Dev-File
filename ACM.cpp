#include <bits/stdc++.h>

using namespace std;
long long a[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("ACM.inp","r",stdin);
    freopen("ACM.out","w",stdout);
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    long long x=0,y=0;
    sort(a+1,a+1+n);
    for(long long i=1;i<=n;i++)
    {
        y=a[i]+y;
        x=x+y;
    }
    cout<<x;
    return 0;
}
