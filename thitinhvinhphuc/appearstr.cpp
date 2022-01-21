#include <bits/stdc++.h>
using namespace std;
map<char,int>m;
int main() {
    string s;
    getline(cin, s);
    for(int i=0;i<s.size();i++) {
        m[s[i]]++;
    }
    for(auto i : m) {
        cout << i.first << " " << i.second << '\n';
    }
    return 0;
}