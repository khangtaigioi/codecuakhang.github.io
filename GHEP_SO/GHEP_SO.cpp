#include <bits/stdc++.h>

using namespace std;

string a[100001];

bool ss(string s, string ss) {
    while (s.size() > ss.size()) ss=ss+'0';
    while (s.size() < ss.size()) s=s+'0';
    return s > ss;
}

int main() {
    freopen("GHEP_SO.inp","r",stdin);
    freopen("GHEP_SO.out","w",stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, ss);
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    return 0;
}