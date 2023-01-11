#include <bits/stdc++.h>
using namespace std;
bool kt(long long b)
{
    while(b%2==0) b=b/2;
    while(b%5==0)b=b/5;
    return b==1;
}
int main()
{
    freopen("Bai04.inp","r",stdin);
    freopen("Bai04.out","w",stdout);
    long long n,a,b,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        b=b/__gcd(a, b);
        if(kt(b)==true) d++;
    }
    cout<<d;
    return 0;
}