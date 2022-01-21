#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    freopen("nguyen_to.inp","r",stdin);
    freopen("nguyen_to.out","w",stdout);
    int n;
    cin >> n;
    int dem;
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            cout << i;
            if(dem > 1) cout << "^" << dem;
            if(n > i){
                cout << "*";
            }
        }
    }
    
}