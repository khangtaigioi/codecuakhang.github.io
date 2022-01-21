#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("tinh.inp","r",stdin);
    freopen("tinh.out","w",stdout);
    long long n,kq;
    cin >> n;
    kq=n;
    for(int i=2;i*i<=(n);i++) {
        if(n%i==0) {
            kq=kq-kq/i;
            while(n%i==0) {
                n/=i;
            }
        }
        
    }
    if(n>1) kq=kq-kq/n;
        
    cout << kq;
    return 0;
}
