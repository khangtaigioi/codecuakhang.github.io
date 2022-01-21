#include <bits/stdc++.h>
using namespace std;
bool sodep (int n) {
    long long t=1+8*n;
    long long c=sqrt(t);
    if (c*c==t && c%2!=0) return true;
    else return false;
}
int main() {
    freopen("Bai04.INP","r",stdin);
    freopen("Bai04.OUT","w",stdout);
    int n,dem=0;
    cin >> n;
    for(int i=2;i<=n;i++) {
        if(sodep(i)==true) dem++;
    }
    cout << dem;
    return 0;
}