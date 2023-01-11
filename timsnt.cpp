#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n>3)
    for(int i=2;i*i<=n;i++)
    if(n%i==0) return false;
    return true;
}

int tcs(int n)
{
    int t=0;
    while(n>0)
    {
        t=t+n%10;
        n/=10;
    }
    return t;
}
int main()
{
    freopen("timsnt.inp","r",stdin);
    freopen("timsnt.out","w",stdout);
    long long n,m,d=0,t=0;
    cin>>n>>m;
    int kq[1000];
    for(int i=2;i<=n;i++)
        if(ktnt(i)&&tcs(i)==m)
    {
        d++;
        kq[d]=i;
    }
    cout<<d<<endl;
    for(int i=1;i<=d;i++) cout<<kq[i]<<" ";
    return 0;
}
