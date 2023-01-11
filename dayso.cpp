#include <bits/stdc++.h>
using namespace std;
bool a[100];
int main()
{
    freopen("DAYSO.inp", "r", stdin);
    freopen("DAYSO.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) a[i] = 0;
    int f1 = 0, f2 = 1, f3, f;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f3 = (f1 + f2)%100;
        f1 = f2;
        f2 = f3;
        f = f3 % 100;
        a[f3] = 1;

    }
    int d = 0;
    for (int i = 0; i < 100; i++)
        if (a[i]) d++;
    cout << f3 << endl << d;
    return 0;
}
