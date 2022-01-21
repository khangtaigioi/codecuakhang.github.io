#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
    long long tong=0;
    for(long long i=0;i<s.size();i++) {
        tong+=(s[i]-'0');
    }
    if(tong%9==0) return true;
    else return false;
}
int main() {
    long long t;
    string s;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> s;
        if(check(s)==true) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}