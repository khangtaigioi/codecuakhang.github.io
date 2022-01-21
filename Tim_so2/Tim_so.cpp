#include<bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n==0 || n==1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
long long nhanChuSo(long long n){
    long long kq=1;
    if(n<0) return 0;
    else {
        for(int i=n;i>0;i/=10){
            kq*=i%10;
        }
        return kq;
    }
}
int main() {
    freopen("Tim_so.inp","r",stdin);
    freopen("Tim_so.out","w",stdout);
    long long n,so=0;
    cin >> n;
    if(snt(n)) {
        cout << -1;
        return 0;
    }
    while(true) {
        if(nhanChuSo(so)==n) {
            cout << so;
            return 0;
        }
        so++;
    }
    cout << so;
}