#include <bits/stdc++.h>
using namespace std;
long long tong(long long a,long long b)
{
    long long ssh=0;
    while(a%2==0)
    {
        a++;
    }
    while(b%2==0)
    {
        b--;
    }
    ssh=(b-a)/2+1;
    return (a+b)*ssh/2;
}
void solve(long long a,long long b)
{
    long long delta=a*a-4*(-1)*b*(-1);
    long long t=sqrt(delta);
    if(t*t!=delta)
    {
        cout << -1;
    }
    else
    {
        long long x1=(a*(-1)-sqrt(delta))/(2*(-1));
        long long x2=(a*(-1)+sqrt(delta))/(2*(-1));
        cout << min(x1,x2) << " " << max(x1,x2);
    }
}
long long n,m;
int main()
{
    //freopen("TIMSO.INP","r",stdin);
    //freopen("TIMSO.OUT","w",stdout);
    cin >> n >> m;
    cout << tong(n,m) << '\n';
    cout << n/__gcd(n,m) << " " << m/__gcd(n,m) << '\n';
    solve(n,m);
}