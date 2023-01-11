#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("uongnuoc.inp","r",stdin);
    freopen("uongnuoc.out","w",stdout);
    int n;
    cin>>n;
   if(n<6) cout<<"BAN UONG THIEU NUOC";
   else if(n>8) cout<<"BAN UONG THUA NUOC";
   else cout<<"BAN UONG DU NUOC";
   return 0;

}
