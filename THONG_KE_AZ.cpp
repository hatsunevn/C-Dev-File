#include <bits/stdc++.h>

using namespace std;
int s[1000];
int main()
{
    freopen("THONG_KE_AZ.inp","r",stdin);
    freopen("THONG_KE_AZ.out","w",stdout);
    string a;
    getline(cin,a);
    for(int i=0;i<a.size();i++) s[a[i]]++;
    for(int i=97;i<=122;i++)
        if(s[i]>0) cout<<char(i)<<": "<<s[i]<<endl;
    return 0;
}