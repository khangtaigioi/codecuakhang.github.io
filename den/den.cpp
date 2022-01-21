#include <bits/stdc++.h>

using namespace std;
const int v[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int tinh(string s) {
    int cs=0,tong=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='0') cs=v[0];
        if(s[i]=='1') cs=v[1];
        if(s[i]=='2') cs=v[2];
        if(s[i]=='3') cs=v[3];
        if(s[i]=='4') cs=v[4];
        if(s[i]=='5') cs=v[5];
        if(s[i]=='6') cs=v[6];
        if(s[i]=='7') cs=v[7];
        if(s[i]=='8') cs=v[8];
        if(s[i]=='9') cs=v[9];
        tong+=cs;
    }
    return tong;
}
int main() {
    freopen("den.inp","r",stdin);
    freopen("den.out","w",stdout);
    int a,b,tong=0;
    while(cin >> a >> b) {
        for(int i=a;i<=b;i++) {
            tong+=tinh(to_string(i));
        }
        cout << tong << '\n';
        tong=0;
    }
    return 0;
}