#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("tongps.inp","r",stdin);
    freopen("tongps.out","w",stdout);
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d;
    e=a*d;
    f=b*c;
    g=f+e;
    h=b*d;
    cout<<g/__gcd(g,h)<<" "<<h/__gcd(g,h);
    return 0;
}
