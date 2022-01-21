#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("Bai02.inp","r",stdin);
    freopen("Bai02.out","w",stdout);
    int h, p, s;
    cin >> h >> p >> s;
    s++;
    if (s == 60) {
        p++;
        s = 0;
    }
    if (p == 60) {
        h++;
        p = 0;
    }
    if (h == 24) {
        h = 0;
        p = 0;
        s = 0;
    }
    cout << h << " " << p << " " << s;
    return 0;
}