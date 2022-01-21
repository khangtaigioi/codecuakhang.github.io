#include <bits/stdc++.h>
using namespace std;

long long tich(long long n)
{
    long long temp = n,P=1;
    while(temp != 0) {
        P = P * (temp % 10);
        temp = temp / 10;
    }
    return P;
}
bool check(long long n) {
    if(n%tich(n)==0) return true;
    return false;
}

int main()
{
    freopen("PRODUCT.inp","r",stdin);
    freopen("PRODUCT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n,m,dem=0;
    cin >> n >> m;
    for(long long i=n;i<=m;i++) {
        if(tich(i)!=0 && i%tich(i)==0) {
            dem++;
        }
    }
    cout << dem;
    return 0;
}
