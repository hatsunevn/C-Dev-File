#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("phansomax.inp","r",stdin);
    freopen("phansomax.out","w",stdout);
    double a[1000],b[1000],m=0;
    int n,kq;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a[i]=a[i]/b[i];
    }
    for(int i=0;i<n;i++)
        if(a[i]>m){m=a[i];kq=i;}
        cout<<kq;
    return 0;
}
