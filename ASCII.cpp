#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("ASCII.inp","r",stdin);
    freopen("ASCII.out","w",stdout);
    string s;
    double n,t,d=0,m;
    getline(cin,s);
    n=s.length();
    for(int i=0;i<n;i++)
    {
        t=char(s[i]);
        d=d+t;
        m=d/n;
    }
    cout<<fixed<<setprecision(1)<<m;
    return 0;
}
