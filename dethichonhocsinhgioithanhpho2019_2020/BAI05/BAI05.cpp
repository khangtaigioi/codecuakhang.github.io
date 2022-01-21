#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main() {
    freopen("Bai05.INP","r",stdin);
    freopen("Bai05.OUT","w",stdout);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    cout << max(a[0]*a[1], a[n-1]*a[n-2]);
    return 0;
}