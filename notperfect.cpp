#include <bits/stdc++.h>

using namespace std;
bool scp(int n)
{
    int k=sqrt(n);
    return k*k!=n;
}
int main()
{
    freopen("notperfect.inp","r",stdin);
    freopen("notperfect.out","w",stdout);
    long long n,so,kq=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>so;
        if(scp(so))kq=max(kq,so);
    }
    cout<<kq;
    return 0;
}
