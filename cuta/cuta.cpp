#include <bits/stdc++.h>

long long f[10005], gt[7] = {0,1,2,5,10,15,20};

using namespace std;

int main() {
    freopen("CUTA.inp","r",stdin);
    freopen("CUTA.out","w",stdout);
    long long n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        f[i]=n+1;
        for (int j=1;j<=6;j++) {
            if (i>=gt[j]) {
                f[i]=min(f[i],f[i-gt[j]]+ 1);
            }
        }
    }
    cout << f[n];
    return 0;
}