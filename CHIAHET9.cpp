#include <bits/stdc++.h>

using namespace std;
bool chia9(string n)
{
    long long tcs=0;
    for(int i=0;i<n.size();i++)
    tcs+=n[i]-48;
    if(tcs%9==0) return true;
    return false;
}
int main()
{
    freopen("CHIAHET9.inp","r",stdin);
    freopen("CHIAHET9.out","w",stdout);
    int t;
    cin>>t;
    string n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(chia9(n)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
