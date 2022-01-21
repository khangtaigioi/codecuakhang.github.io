#include <bits/stdc++.h>
using namespace std;
int luythua(int a, int b)
{
    int kq=1;
    for(int i=1;i<=b;i++) kq*=a;
    return kq;
}
int main()
{
    freopen("CHU_SO.inp","r",stdin);
    freopen("CHU_SO.out","w",stdout);
    string a,b; int aa,bb;
    cin >> a >> b;
    b='0'+b;
    aa=a[a.size()-1]-48;
    if(aa==0 || aa==1 || aa==5 || aa==6) cout << aa;
    else if(aa==2 || aa==3 || aa==7 || aa==8){
        bb=(b[b.size()-2]-48)*10+b[b.size()-1]-48;
        bb%=4;
        if(bb==0) bb=4;
        cout << luythua(aa,bb)%10;
    }
    else{
        bb=b[b.size()-1]-48;
        bb%=2;
        if(bb==0) bb=2;
        cout << luythua(aa,bb)%10;
    }
    return 0;
}
