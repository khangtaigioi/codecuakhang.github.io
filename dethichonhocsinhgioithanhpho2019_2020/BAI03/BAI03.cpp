#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("Bai03.INP","r",stdin);
    freopen("Bai03.OUT","w",stdout);
    long long n,zb,dem=0;
    cin >> n;
    for(int x=1;x<=sqrt(n);x++) {
        for(int y=x+1;y<=sqrt(n);y++) {
            for(int z=y+1;z<=sqrt(n);z++) {
                if(x*x + y*y + z*z == n) {
                    cout << x << " " << y << " " << z << '\n';
                    dem++;
                }
            }
        }
    }
    if(dem==0) cout << 0;
    cout << dem;
    return 0;
}