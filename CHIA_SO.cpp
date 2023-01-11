#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIA_SO.inp","r",stdin);
    freopen("CHIA_SO.out","w",stdout);
    string s;
    cin>>s;
    s=s+'?';
    long long so=0,sln=0,snn=1e9;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9') so=so*10+s[i]-48;
        else if(s[i-1]>='0' && s[i-1]<='9')
        {
            if(sln<so) sln=so;
            if(snn>so) snn=so;
            so=0;
        }
    }
    cout<<sln<<endl<<snn<<endl<<sln/snn<<endl<<sln%snn;
    return 0;
}
