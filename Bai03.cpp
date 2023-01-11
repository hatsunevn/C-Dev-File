#include <bits/stdc++.h>à
using namespace std;

int main()
{
    freopen("bai03.inp","r",stdin);
    freopen("bai03.out","w",stdout);
    int a,b;
    cin>>a>>b;
    int t=pow(10,a-1),bd=t/b,kt=(pow(10,a)-1)/b;
    if(bd*b==t) cout<<t<<endl;
    for(int i=bd+1;i<=kt;i++)
        cout<<i*b<<endl;
    return 0;
}