#include <bits/stdc++.h>

using namespace std;

bool bd1(string n)
{
    if((n[0]-48)%3==0) return 1;
    return 0;
}
bool bd2(string n)
{
    if((n[n.size()-1]-48)%3==0) return 1;
    return 0;
}
bool bd3(string n)
{
    if(((n[n.size()-1]-48)+(n[0]-48))%3==0) return 1;
    return 0;
}
int main()
{
    freopen("BDXAU.inp", "r", stdin);
    freopen("BDXAU.out", "w", stdout);
    string n;
    cin>>n;
    while(bd1(n)||bd2(n)||bd3(n))
    {
        if(bd1(n)) n.erase(0,1);
        if(bd2(n)) n.erase(n.size()-1,1);
        if(bd3(n))
        {
            n.erase(0,1);
            n.erase(n.size()-1,1);
        }
    }
    cout<<n;
    return 0;
}
