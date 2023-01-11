#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("APGP.inp","r",stdin);
    freopen("APGP.out","w",stdout);
    long long a,b,c;
    while(1>0)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0) return 0;
        if(b-a==c-b) cout<<"AP "<<c+b-a<<endl;
        else if(b%a==0 && c%b==0 && b/a==c/b) cout<<"GP "<<c*(b/a)<<endl;
    }
    return 0;
}
