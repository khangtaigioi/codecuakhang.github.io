#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TI_TEO.inp","r",stdin);
    freopen("TI_TEO.out","w",stdout);
    long long a, b, k, x, y;
    cin >> a >> b >> k >> x >> y;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {
            if ((a + x * i == b + y * j) && (i + j == k)) {
                cout << i;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}