#include <bits/stdc++.h>
using namespace std;
long long f[10005];
vector<long long>luu;
set<long long>xet;
int main() {
    freopen("DAY_SO.inp","r",stdin);
    freopen("DAY_SO.out","w",stdout);
    long long n;
    cin >> n;
    f[1]=f[2]=1;
    luu.push_back(f[1]);luu.push_back(f[2]);
    for(long long i=3;i<=n;i++) {
        f[i]=(f[i-1]+f[i-2]) % 100;
        luu.push_back(f[i]); xet.insert(f[i]);  
    }
    for(long long i=0;i<luu.size();i++) {
        cout << luu[n-1]; break;
    }
    cout << '\n' << xet.size()+1;
    return 0;
}