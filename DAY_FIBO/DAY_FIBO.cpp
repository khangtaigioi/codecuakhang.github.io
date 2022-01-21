#include <bits/stdc++.h>
using namespace std;
string cong(string a ,string b)
{
    while(a.size()< b.size())
        a='0'+a;
    while(b.size()<a.size())
        b='0'+b;
    string kq="";
    int nho=0,n=a.size();
    for(int i=n-1;i>=0;i--)
    {
        int cs1=a[i]-48;
        int cs2=b[i]-48;
        nho =cs1+cs2+nho;
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    if(nho>0)
        kq='1'+kq;
    return kq;
}

int main()
{
    freopen("fibo2.inp","r",stdin);
    freopen("fibo2.out","w",stdout);    
    int truyvan;
    cin >> truyvan;
    
    return 0;
}
