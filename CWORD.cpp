#include <bits/stdc++.h>
using namespace std;
bool ds(string s) {
    string m=s;
    reverse(s.begin(),s.end());
    return m==s;
}
string s;
int d=0;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CWORD.inp","r",stdin);
    freopen("CWORD.out","w",stdout);
    while(cin>>s) {
        if(ds(s)) d++;
    }
    cout<<d;
    return 0;
}