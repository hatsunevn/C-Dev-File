#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("timx.INP","r",stdin);
    freopen("timx.OUT","w",stdout);
    string s;int m=0,n=0,a=0,b=0,c=0;
    cin>>s;
    int vtc=s.find('+'),vtb=s.find('='),vtx=s.find('x');
    for(int i=0;i<vtc;i++)a=a*10+int(s[i])-48;
    for(int i=vtc+1;i<vtb;i++)b=b*10+int(s[i])-48;
    for(int i=vtb+1;i<s.size();i++)c=c*10+int(s[i])-48;
    if(vtx>vtb)cout<<a+b;
    if(vtc<vtx&&vtx<vtb)cout<<c-a;
    if(vtc>vtx)cout<<c-b;
    return 0;
}