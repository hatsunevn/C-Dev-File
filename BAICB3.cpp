#include <bits/stdc++.h>
using namespace std;
int main()
{
   freopen ("BAICB3.inp","r",stdin);
   freopen ("BAICB3.out","w",stdout);
   long long h,p,s;
   cin>>h>>p>>s;
   s++;
   if(s==60) {s=0;p=p+1;}
   if(p==60) {p=0;h++;}
   if(h==24) {h=0;}
   cout<<h<<" "<<p<<" "<<s;
   return 0;
}