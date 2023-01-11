#include <bits/stdc++.h>
using namespace std;
const int hh[4]={6,28,496,8128};
int N,d,A;
int luu[300000];
int main()
{
    freopen("QUA.INP","r",stdin);
    freopen("QUA.OUT","w",stdout);
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>A;
        if(A==hh[0] || A==hh[1] || A==hh[2] || A==hh[3])
        {
            luu[d]=A;
            d++;
        }
    }
    cout<<d<<'\n';
    for(int i=0;i<d;i++)cout<<luu[i]<<' ';
    return 0;
}
