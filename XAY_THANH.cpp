#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("XAY_THANH.inp","r",stdin);
    freopen("XAY_THANH.out","w",stdout);
    cin>>s;
    set<string> d;
    for(int i=0;i<s.size();i++) {
        for(int j=1;j<=s.size();j++) {
            string kq=s.substr(i,j);
            d.insert(kq);
        }
    }
    cout<<d.size();
    return 0;
}