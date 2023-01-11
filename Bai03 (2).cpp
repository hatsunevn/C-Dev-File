#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai03.inp","r",stdin);
    freopen("Bai03.out","w",stdout);
    int n,m,a=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)a=a*10;
    for(int i=a/10;i<a;i++)
    {
        if(i%m==0)cout<<i<<endl;
    }
    return 0;
}


