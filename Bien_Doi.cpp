#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Bien_Doi.inp","r",stdin);
    freopen("Bien_Doi.out","w",stdout);
    long long a,b,c,k,sl,tong,sk;
    cin>>a>>b>>c>>k;
    sl=max(a,max(b,c));
    tong=a+b+c-sl;
    for (int i=1;i<=k;i++)
    {
        sl=sl*2;
    }
    cout<<tong+sl;
    return 0;
}
