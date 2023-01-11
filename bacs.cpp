#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("bacs.inp","r",stdin);
    freopen("bacs.out","w",stdout);
   long long a;
   double t;
   cin>>a;
   t=a/100+a/10%10+a%10;
   cout<<fixed<<setprecision(2)<<t<<" "<<t/3;
    return 0;
}
