#include <bits/stdc++.h>
using namespace std;
int n,k,tong=0;
int main() {
    freopen("GIAY_IN.inp","r",stdin);
    freopen("GIAY_IN.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> k;tong+=(k+1)/2;
    }
    cout << tong;
    return 0;
}