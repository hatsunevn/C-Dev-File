#include <bits/stdc++.h>

using namespace std;

long long scs(long long n)
{
    long long s=0;
    while(n>0)
    {
        s++;
        n/=10;
    }
    return s;
}
int main()
{
    freopen("demchan.inp", "r", stdin);
    freopen("demchan.out", "w", stdout);
    long long a,b,d=0;
    cin>>a;
    for(long long i=1;i<=a;i++)
    {
        cin>>b;
        if(scs(b)%2==0)d++;
    }
    cout<<d;
    return 0;
}
