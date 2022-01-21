#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
    freopen("DEM_DU.inp","r",stdin);
    freopen("DEM_DU.out","w",stdout);
    set<long long>s;
    long long n,k,dem=0,du=0;
    cin >> n >> k;
    for(long long i=0;i<n;i++) {
        cin >> a[i];
        du=a[i]%k;
        s.insert(du);
    }
    cout << s.size();
    return 0;
}