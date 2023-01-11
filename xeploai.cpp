#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("xeploai.inp","r",stdin);
    freopen("xeploai.out","w",stdout);
    double diem;
    cin>>diem;
    if (diem>=8)cout<<"G";
    else if (diem>=6.5)cout<<"K";
    else if (diem>=5)cout<<"TB";
    else cout<<-1;
    return 0;
}
