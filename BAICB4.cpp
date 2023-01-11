#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("baicb4.inp","r",stdin);
    freopen("baicb4.out","w",stdout);
    double a,b,k=1;
    cin>>a>>b;
    int c=(int)a;
    int d=(int)b;
    if(c<a)c++;
    cout<<(d+c)*(d-c+1)/2;
    return 0;
}