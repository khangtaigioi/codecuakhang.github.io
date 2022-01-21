#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("TONG_SO.inp","r",stdin);
    freopen("TONG_SO.out","w",stdout);
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b==c || b+c==a || a+c==b) cout << 1;
    else cout << 0; 
}