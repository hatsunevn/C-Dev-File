#include <bits/stdc++.h>
using namespace std;
bool ngto(int a)
{
    if (a<2) return false;
    for (int i=2; i<=sqrt(a); i++)
        if (a%i==0) return false;
    return true;
}
int main()
{
    freopen("SIEUNT.inp","r",stdin);
    freopen("SIEUNT.out","w",stdout);
    queue<int> q;
    int n;
    cin >> n;
    for (int i=1; i<=n,i<10; i++)
        if (ngto(i)) q.push(i);
    while (!q.empty())
    {
        for (int i=1; i<=9; i++)
        {
            int x=q.front()*10+i;
            if (ngto(x) && x<=n) q.push(x);
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
