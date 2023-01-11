#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen ("GHEP_SO.inp","r",stdin);
    freopen ("GHEP_SO.out","w",stdout);
    long long a,b,c,sl,sn,bth;
    cin>>a>>b>>c;
    sl=max(a,max(b,c));
    sn=min(a,min(b,c));
    bth=a+b+c-sl-sn;
    cout<<sl*100+bth*10+sn;
    return 0;
}
