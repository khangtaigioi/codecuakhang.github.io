#include <bits/stdc++.h>
using namespace std;
long long tongChuSo(long long n){
    long long sum=0;
    if(n<0) return 0;
    else{
        for(int i=n;i>0;i/=10){
            sum+=i%10;
        }
        return sum;
    }
}

long long tonguoc(long long n){
    long long tong=0;
    for(int i=1;i<=(n);i++){
        if(n%i==0) {
            tong+=tongChuSo(i);
        }
    }
    return tong;
}
int a[100007];
int main()
{
    freopen("stable.inp","r",stdin);
    freopen("stable.out","w",stdout);
    long long n,dem=0;
    vector<long long>luu;
    while(cin >> n) {
        for(long long i=1;i<=n;i++) {
            a[i]=tonguoc(a[i]);
            luu.push_back(tonguoc(i));
        }
        for(int i=0;i<luu.size();i++) {
            cout << luu[i] << " ";
            if(luu[i]==luu[i+1]) {
                dem++;
                cout << i+1 << '\n';
                break;
            }
        }
        if(dem==0) cout << -1 << '\n';
    }
    
    return 0;
}