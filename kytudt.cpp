#include <bits/stdc++.h>
using namespace std;
string s;
int k,f[26],ma=0;
int main()
{
    freopen("kytudt.inp","r",stdin);
    freopen("kytudt.out","w",stdout);
    cin>>k>>s;
    for(int i=0;i<s.size();i++) {
        ma=int(s[i])-97;
        f[ma]++;
    }
    for(int i=0;i<s.size();i++) {
        ma=int(s[i])-97;
        if(f[ma]==k) {cout<<i+1;return 0;}
    }
    cout<<-1;
    return 0;
}
