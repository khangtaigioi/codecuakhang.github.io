#include<bits/stdc++.h>
using namespace std;
const int n=10e6+1;
long long fibo(long long n)
{
    long long tong=2;
    long long a[n];
    a[1]=a[2]=1;
    for (long long i=3;i<=n;i++) {
        a[i]=(a[i-1]+a[i-2])%1000000007;
        tong=(tong+a[i])%1000000007;
    }
    return tong;
}
int main()
{
    freopen("FIBO.inp","r",stdin);
    freopen("FIBO.out","w",stdout);
    long long n;
    cin >> n;
    cout << fibo(n);
}
