#include <bits/stdc++.h>
using namespace std;
int main()
{
freopen ("BAICB2.inp","r",stdin);
freopen ("BAICB2.out","w",stdout);
int n;
cin>>n;
if (n<=30)cout<<n*4000+5000;
else cout<<(n-30)*3000+125000;
return 0;
}