#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("Bai01.inp", "r", stdin);
    freopen("Bai01.out", "w", stdout);
    string n;
    cin>>n;
    sort(n.begin(), n.end());
    cout<<n[n.size()-1]<<n[0];
    return 0;
}
