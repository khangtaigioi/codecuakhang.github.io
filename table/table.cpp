#include <bits/stdc++.h>    
using namespace std;
int main() {
    freopen("table.inp","r",stdin);
    freopen("table.out","w",stdout);
    double a,b,c,d,one,two,three,four;
    double m=0;
    cin >> d >> a >> b >> c;
    one = a/c - b/d;
    two = c/d - a/b;
    three = d/b - c/a;
    four = b/a - d/c;
    cout << one << " " << two << " " << three << " " << four << '\n';
    m=max(one,max(two,max(three,four)));
    if(one==m) cout << 0;
    else if (two==m) cout << 1;
    else if(three==m) cout << 2;
    else if(four==m) cout << 3;
    return 0;
}