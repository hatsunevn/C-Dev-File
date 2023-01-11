#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BCNN.inp", "r", stdin);
    freopen("BCNN.out", "w", stdout);
    long long m,n;
    cin>>m>>n;
    cout<<m*n/__gcd(m,n);
    return 0;
}
