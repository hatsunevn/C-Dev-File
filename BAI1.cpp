#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BAI1.inp","r",stdin);
    freopen("BAI1.out","w",stdout);
    long long a,b,c,mi,ma;
    cin>>a>>b>>c;
    mi=min(a,min(b,c));ma=max(a,max(b,c));
    cout<<a*a*a-b*b+c<<endl;
    cout<<mi<<" "<<a+b+c-mi-ma<<" "<<ma;
    return 0;
}
