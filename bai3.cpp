#include <bits/stdc++.h>
using namespace std;
bool sohoanhao(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) return true;
    return false;
}
int a[101],n,x,dem1=0,dem2=0,tich=1;
int main()
{
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
    cout<<"Nhap n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"nhap x:";
    cin>>x;
    for(int i=1;i<=n;i++)
        if(a[i]==x) dem1++;
        cout<<"so phan tu x la:"<<dem1<<" ";
        cout<<"phan tu co gia tri o vi tri le la:"<<'\n';
       for(int i=1;i<=n;i++)
          if(a[i]%2==0&&i%2==1)
    cout<<a[i]<<'\n';
         for(int i=1;i<=n;i++)
          if(sohoanhao(a[i])==true) dem2++;
    cout<<"phan tu la so hoan hao la:"<<dem2<<'\n';
    for(int i=1;i<=n;i++)
    {
       int ma=a[0],mi=a[0],f=0,e=0;
       if(ma<a[i]) {ma=a[i]; f=i;}
       if(mi>a[i]) {mi=a[i]; e=i;}
        for(int i=f;i<=e;i++)
            tich*=a[i];
    }
    cout<<"Tich cac phan tu:"<<tich<<'\n';
    return 0;
}
