#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,dem=0;
    while(cin >> n){
        for(int i=1;i<=(n);i++) {
            for(int j=i;j<=(n)-i;j++) {
                for(int k=j;k<=(n)-i-j;k++) {
                    int z=n-i-j-k;
                    if(z>=k) dem++;
                }
            }
        }
        cout << dem << '\n';
        dem=0;
    }
    return 0;
}
