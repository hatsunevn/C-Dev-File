#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("uocso.inp","r",stdin);
    freopen("uocso.out","w",stdout);
long long n,d=0,i,k;
cin>>n;
k=sqrt(n);
for(i=1;i<=k;i++)
    if(n%i==0) d=d+2;
    if(k*k==n) d--;
    cout<<d;
}