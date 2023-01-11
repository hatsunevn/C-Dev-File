#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("vongtay.inp","r",stdin);
    freopen("vongtay.out","w",stdout);
    int n;
    cin>>n;
    int du=n%7,st=n/7;
    if(st%2==0) cout<<7-du<<" "<<du;
    else cout<<du<<" "<<7-du;
    return 0;
}