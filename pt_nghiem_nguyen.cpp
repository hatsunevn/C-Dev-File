#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("pt_nghiem_nguyen.inp","r",stdin);
    freopen("pt_nghiem_nguyen.out","w",stdout);
    int a,b,c,d=0;
    cin>>a>>b>>c;
    for(int x=0;x<=c;x++)
        for(int y=0;y<=c;y++)
        if(x*a+y*b==c)d++;
    cout<<d;
    return 0;
}
