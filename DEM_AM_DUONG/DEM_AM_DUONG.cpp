#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DEM_AM_DUONG.inp","r",stdin);
    freopen("DEM_AM_DUONG.out","w",stdout);
    int n,a=0,d=0;
    cin >> n;
    string s;
    for(int i=0;i<n;i++) {
        cin >> s;
        if(s[0]=='-') a++;
        else if(isdigit(s[0]) && s!="0") d++;
    }
    cout << a << " " << d;
    return 0;
}