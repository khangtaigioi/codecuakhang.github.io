#include <bits/stdc++.h>
using namespace std;
 
int dem(string s) {
    int dem=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='0') dem++;
    }
    return dem;
}

int dem2(string s) {
    int dem=0;
    for(int i=s.size()-1;i>=0;i--) {
        if(s[i]=='0') dem++;
        else break;
    }
    return dem;
}
int main(){
    freopen("DEM_0.inp","r",stdin);
    freopen("DEM_0.out","w",stdout);
    string s;
    cin >> s;
    if(s[s.size()-1]!='0') cout << dem(s);
    else cout << dem(s)-dem2(s);
}