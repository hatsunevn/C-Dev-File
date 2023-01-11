    #include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("xep_hang.inp","r",stdin);
    freopen("xep_hang.out","w",stdout);
    long long n,l,r,s=0;
    cin>>n>>l>>r;
    for (long long i=1;i<=r;i++)
    {
        if(i%2==0) s=s+i-1;
        else s=s+i+1;
    }
    cout<<s;
    return 0;
}