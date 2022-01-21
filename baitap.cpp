/*#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long t1,t2,m1,m2;
    cin >> t1 >> m1 >> t2 >> m2;
    if(m1==m2 && m1 !=0 && m2!=0){
        long long tong1=t1+t2;
        cout << tong1/__gcd(tong1,m1) << " " << m1/__gcd(tong1,m1); ///tongphanso
    }
    else if(m1!=m2 && m1 !=0 && m2!=0) {
        long long qdt1=t1*m2;
        long long qdt2=t2*m1;
        long long mqd=m1*m2;
        cout << (qdt1 + qdt2) / __gcd((qdt1+qdt2),mqd) << " " << mqd /  __gcd((qdt1+qdt2),mqd);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,tong=0;
    cin >> n;
    for(int i = 1;i <= n;i++){                             ///tinh tong S= 1^4 + 2^4 + ... + n^4
        tong+=i*i*i*i;
    }
    cout << tong;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long souoc(long long n)
{
    long long t=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            t++;
    }
    return t;
}
int a[105];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    long long t=0,dem=0;                        /// so uoc chia het cho 7
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            t=souoc(a[i])+souoc(a[j]);
            if(t%7==0)
                dem++;
        }
    }
    cout << dem;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cout << "#";
    cout << endl;
    for(int i=0;i<n-1;i++) cout << "#";
    cout << endl;
    for(int i=0;i<n-2;i++) cout <<"#";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){             /// ve hinh
            cout << "$";
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(a+b > c && b+c > a && c+a > b) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << "!";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool snt(long long a)
{
    if(a==0 || a==1)
        return false;
    else
        for(int i=2;i<=sqrt(a);i++)
        {
            if (a%i==0) return false;
        }
    return true;
}
long long a[10005];
int main()
{
    int n,dem=0;
    cin >> n;
    for(int i=1;i<=n;i++){
       cin >> a[i] ;
    }
    for(int i=1;i<=n;i++){
        if(snt(abs(a[i]))
            dem++;
    }
    cout << dem;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,tong=0;
    cin >> n;                   //tong mu 2
    for(int i = 1;i <= n;i++){
        tong+=i*i;
    }
    cout << tong;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,tong=0;
    cin >> n;
    for(long long i = 1;i <= n;i++){                //tong mu 3 cach 1
        tong+=i*i*i;
    }
    cout << tong;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
  int i, n, S;
  cin >> n;
  S = 0;
  i = 1;
  while(i <= n)
  {
    S = S + i * i * i;                  ////tong mu 3 cach 2
    i++;
  }
  cout << S;
}
#include <bits/stdc++.h>
using namespace std;
int scp(long long n)
{
    long long a=sqrt(n);
    if(a*a==n) return true;
    else return false;
}
int main()
{
    long long a,b,dem=0;
    cin >> a >> b;
    while(a<=b){
        if(scp(a)==true)                //dem so chinh phuong trong doan tu a den b
            dem++;
    a++;
    }
    cout << dem;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    long long nguyen = (long long)(n);             //phan nguyen phan le
    long long le = n-((long long)(n));
    cout << nguyen << " " << le;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,tong=0;
    cin >> n;
    for(unsigned long long i=1;i<n;i+=2){
        tong+=i;
    }
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char kt;
    cin >> kt;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){                   //in ra ky tu n dong m cot
            cout << kt;
        }
        cout << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int n,kq=1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int dem=1;
    sort (a,a+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                dem++;
                if(dem > kq)                 //dem so lan xuat hien nhieu nhat
                {
                    kq = dem;
                }
            }
            else {
                dem=1;
            }
        }
    }
    cout << kq;
    return 0;
}
#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<string, pair<int, pair<int, int>>> nguoi1;
    pair<string, pair<int, pair<int, int>>> nguoi2;
    string name1, name2;
    int weight1, weight2;
    int height1, height2;
    int age1, age2;
    cin >> name1 >> weight1 >> height1 >> age1;
    nguoi1.first = name1;
    nguoi1.second.first = weight1;
    nguoi1.second.second.first = height1;                                 //cau thu tre hon
    nguoi1.second.second.second = age1;
    cin >> name2 >> weight2 >> height2 >> age2;
    nguoi2.first = name2;
    nguoi2.second.first = weight2;
    nguoi2.second.second.first = height2;
    nguoi2.second.second.second = age2;
    if (nguoi1.second.second.second < nguoi2.second.second.second) {
        cout << nguoi1.first << " " << nguoi1.second.first << " " << nguoi1.second.second.first << " " << nguoi1.second.second.second;
    } else {
        cout << nguoi2.first << " " << nguoi2.second.first << " " << nguoi2.second.second.first << " " << nguoi2.second.second.second;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int scp(long long n)
{
    long long a=sqrt(n);
    if(a*a==n) return true;
    else return false;
}
int main()
{
    long long a;
    cin >> a;
    if(scp(a)==true) cout << "YES";                  //so chinh phuong
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    cout << a+(long long)sqrt(a);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    long long ax=abs(a2-a1);
    long long bx=abs(b2-b1);                                        // kiem tra 3 diem thang hang (SAI test4 LTPT)
    long long cx=abs(c2-c1);
    if(ax == bx && bx == cx && ax == cx) cout << "YES";
    else cout << "NO";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,e,m1,m2,m3,m4,m5,m6;
    cin >> a >> b >> c >> d >> e;
    m1=min(a,b);
    m2=min(b,c);
    m3=min(c,d);
    m4=min(d,e);                //so nho nhi sai test4
    m5=min(m1,m4);
    m6=min(m2,m3);
    if(m5<m6) cout << m6;
    else cout << m5;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a==b==c==d || b==c==d==e || a==c==d==e || b==a==d==e || a==b==c==e || a==b==c==d==e) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    cout << (a+b)*((b-a)+1)/2;              //tinh doan tu a den b
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
string ss(string a,string b)
{
    while(a.size()<b.size()) a='0'+a;
    while(a.size()>b.size()) b='0'+b;					// so sanh 2 so string
    if(a < b) cout << -1;
    else if(a > b) cout << 1;
    else cout << "=";
}
int main()                                          
{
    string a,b;
    cin >> a >> b;
    cout << ss(a,b);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,dem=0;
    cin >> n;
    for(long long i=2;i<=n/2;i++){
        if(n%i==0)
            dem++;
    }
    cout << dem+2;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string ch;
    getline(cin,ch);
    if(s.find(ch) == string :: npos)                // tìm xâu ch có trong xâu s hay không
        cout << "NO";
    else cout << "YES";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long m;
    cin >> n >> m;
    long long tich = m*n;
    cout << tich;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{
    int n;
    vector<int>chan;
    vector<int>le;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
    {
        if (a[i]%2==0)
            chan.push_back(a[i]);   //Cho 1 dãy gồm n số nguyên dương. Nhiệm vụ của bạn là hãy đưa các phần tử chẵn lên đầu dãy và các phần tử lẻ về cuối dãy
        else if(a[i]%2!=0)
            le.push_back(a[i]);
    }
    for(int i=0;i<chan.size();i++)
        cout << chan[i] << " ";
    for(int i=0;i<le.size();i++)
        cout << le[i] << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long mu(long long a,int b)
{
     if(b==1)
     return a;
     else
     return mu(a,b-1)*a;
}
int main(){
    long long m;
    int n;
    long long du=10e9+7;
    cin >> n >> m;
    cout << mu(m,n)%du;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,tong=0;
    cin >> n;
    for(long long i=1;i<=n/2;i++){
        if(n%i==0) tong+=i;
    }
    if(tong==n) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >>c >> d;
    cout << max(a,max(b,max(c,d)));
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    cout << min(a,min(b,c));
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >>c >> d;
    cout << min(a,min(b,min(c,d)));
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    double a,b,dem=0;
    cin >> a >> b;
    for(double i=a;i<b;i++){
        if((long long)(i)) dem++;
    }
    cout << dem;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long tong=0;
    for(long long i=1;i<=2*n;i+=2){
        tong+=2*i*i;
    }
    cout << tong;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    if(((long long)(n)%10)%2==0) cout << "YES";
    else cout << "NO";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n,dem=0;;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0) dem++;
    }
    cout << dem;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[10000005],f[10000002];
int main()
{
    int n,kq=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]-a[j]==2 ){                  //day con le(chan) tang lien tiep
                f[i]=f[j]+1;
            }
            else
                f[i]=1;
        }
        kq=max(kq,f[i]);
    }
    cout << kq << endl;
    int x=0,s=0;
    int vtm=0;
    for(int i=1;i<=n;i++){
        if(f[i]==kq){
            vtm=i;
            break;
        }
    }
    x=a[vtm];
    s=x-2*kq+2;
    for(int i=s;i<=x;i+=2)
        cout << i << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long uoc(long long n)
{
    long long dem=1;
    for(long long i=1;i<=n/2;i++){
        if(n%i==0) dem++;
    }
    return dem;
}
int main()
{
    long long n;
    cin >> n;
    cout << uoc(n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]) s.erase(i+1);
        cout << s;
    }

    return 0;
}

#include <bits/stdc++.h>


using namespace std;
int main()
{
    long long t1,t2,m1,m2;
    while (cin >> t1 >> m1 >> t2 >> m2){
        long long tichtu = t1 *t2;
        long long tichmau = m1 * m2;
        cout << tichtu / __gcd(tichtu,tichmau) << " " << tichmau / __gcd(tichtu,tichmau) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
long long a[10000005];
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i] > k && a[i] < a[n-1]) {
            cout << a[i] ;
            break;
        }
        else {
            cout << -1;
            break;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1002];
int main(){
    long long n,dem=0;
    cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];
    for(long long i=0;i<n;i++){
        if(a[i]%2==0) dem++;
    }
    cout << dem;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
   long long a,b;
   cin >> a >> b;
   if(abs(a)>abs(b)) cout << a;
   else if(abs(a)<abs(b)) cout << b;
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long a[1000002];
int main(){
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,greater<long long>());               //sap xep giam. nhung anh LTPT chơi long long
    for(long long i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,tong=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i%2!=0) tong+=i;
    }
    cout << tong;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];             // Viết chương trình nhập vào n số nguyên a1, a2,...,an. Thoát khỏi chương trình khi gặp một số âm và ghi ra số dương cuối cùng trước khi gặp số âm. Nếu dãy không có số âm thì in ra số 0.
    for(long long i=0;i<n;i++){                         // CHÚ Ý CÁCH GIẢI BÀI NÀY!!!
        if(a[i]<=0) {
            cout << a[i-1];
            return 0;
        }
    }
    cout << 0;
    return 0;
}
#include <iostream>
using namespace std;
long long Fibonacci(long long n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);                 // tính số fibonacci thứ n (Đệ quy)
}
int main()
{
    long long n;
    cin >> n;
    cout  << Fibonacci(n) % (100000000+7);
    return 0;
}
#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {                                               //fibonacci thu n (khử đệ quy)
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    cout  << Fibonacci(n) % (100000000+7);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long a[10000005];
int main(){
    int n=1;
    while(cin >> a[n]){
        n++;
    }
    n--;
    for(long long i=0;i<n;i++){             //Viết chương trình nhập vào n số nguyên dương. Ghi ra số 2004 nếu tồn tại số 2004 trong dãy số, ghi ra -1 nếu không tồn tại số 2004 trong dãy số.
        if(a[i]==2004) {
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool kiemtrasochinhphuong(long long n)
{
    long long i=sqrt(n);
    if(i*i==n) return true;
    else return false;
}
long long a[10000006];
int main(){
    long long n=1;
    while(cin >> a[n]){
        n++;
    }
    n--;
    for(long long i=1;i<n;i++){                     //nhập liên tục các số nguyên dương và yêu cầu khi nhập đúng số chính phương thì chương trình dừng lại và in ra số chính phương đó.
        if(kiemtrasochinhphuong(a[i])==true) {
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    int n=1,tong=0;
    while(cin >> a[n]){
        n++;
    }
    n--;
    for(int i=0;i<n;i++){   //tinh tong ko biet so phan tu
        tong+=a[i];
        }
    cout << tong;
    return 0;
}

// nhập mảng liên tục ko cần số phần tử
//     ......
//     long long n=1;
//     while(cin >> a[n]){
//         n++;
//     }
//     n--;
//     ......

#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int main(){
    long long n,dem=0;
    cin >> n;
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }
    for(long long i=0;i<n;i++){                 //Cho N số nguyên dương, các số cách nhau một kí tự trống. Hãy đếm số lượng số chẵn có trong N số nguyên đó và in ra các số đó.
        if(a[i]%2==0){
            dem++;
        }
    }
    cout << dem << endl;
    for(long long i=0;i<n;i++){
        if(a[i]%2==0){
            cout << a[i] << " ";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1002];
int main(){
    long long n,dem=0;
    cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];
    for(long long i=0;i<n;i++){
        if(a[i]%2==0) cout << a[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[1002][1002];
int main()
{
    vector<int>l;
    int n,m,dem=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];         // Ma trận có số phần tử 0 chiếm quá một nửa tổng số phần tử của ma trận thì ma trận đó gọi là ma trận thưa. Kiểm tra xem nếu ma trận thưa in YES, còn không là ma trận thưa thì in NO.
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            l.push_back(a[i][j]);
        }
    }
    for(int i=0;i<l.size();i++){
        if(l[i]==0) dem++;
    }
    if(dem > n*m/2) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long tongchuso(long long n)
{
    long long tong=0;
    while (n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
long long a[1000005];
int main(){
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];
    long long tong=0;
    for(long long i=0;i<n;i++){
        tong+=tongchuso(a[i]);
    }
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n;
    cin >> n;
    cout << (long long)n << " " <<  n-(long long)n;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    cout << (abs(n)*abs(n)) + (abs(m)*abs(m));
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long scs=((2*n+1)-1)/2+1;
    long long tong=((2*n+1)+1)*scs/2;
    cout << tong;
    return 0;
}

#include<iostream>
using namespace std;
long long gt(int n) {
    long long s = 1;
    for (long long i = 1; i <= n; i++)              //PK0006B - Tổ Hợp - http://laptrinhphothong.vn/Problem/Details/5847
        s *= i;
    return s;
}
long long C(int k, int n) {
    return  gt(n) / (gt(k)*gt(n - k));//PK có Q lớp học , mỗi lớp có n học sinh. Vì lớp học có quá đông nên mỗi lớp PK sẽ cử k bạn làm ban cán sự điều hành lớp. Vì có quá nhiều cách chọn nên PK muốn các bạn viết phương trình để tính số cách chọn k bạn làm cán sự của mỗi lớp.
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;
        cout << C(k,n) << endl;
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << n*(n-1)*(n-2)/6;             Mr X muốn chọn 3 thành viên ban cán sự trong lớp 10A2 có n học sinh. Hỏi số cách chọn?
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){

    float a,b;
    int s=0;
    cin>>a>>b;
    for (int i=a+1;i<b;i++){
            s++;
    }
    cout<<s;
    return 0;

}

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sochuso=((2*n+1)-1)/2+1;      //tongle
    cout << ((2*n+1)+1)*sochuso/2;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
vector<int>le;
vector<int>chan;
int a[1000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){                               // Viết chương trình nhập vào n (0 < n ≤ 106) số nguyên. Sắp xếp các phần tử có giá trị lẻ trong mảng theo thứ tự tăng dần, các phần tử chẵn theo thứ tự giảm dần.
        if(a[i]%2!=0) le.push_back(a[i]);
        else if(a[i]%2==0) chan.push_back(a[i]);
    }
    sort(le.begin(),le.end());
    for(int i=0;i<le.size();i++) cout << le[i] << " ";
    cout << '\n';
    sort(chan.begin(),chan.end(),greater<int>());
    for(int i=0;i<chan.size();i++) cout << chan[i] << " ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>ss;
    long long a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    ss.push_back(a);ss.push_back(b);ss.push_back(c);ss.push_back(d);ss.push_back(e);    //Cho 5 số nguyên a, b, c, d, e 64 bit đôi một khác nhau. In ra số nhỏ thứ nhì.
    sort(ss.begin(),ss.end());                                      // in ra số nhỏ nhì phiên bản đúng
    cout << ss[1];
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long day,month,year,kq;
    cin >> day >> month >> year;
    if (month<3){
        month=month+12;
        year=year-1;
    }
    kq=(day+2*month+(3*(month+1)) / 5 + year + (year / 4)) % 7;
    if(kq==0) cout << "Sunday";
    else if(kq==1) cout << "Monday";                    //  sai tháng 2
    else if(kq==2) cout << "Tuesday";
    else if(kq==3) cout << "Wednesday";
    else if(kq==4) cout << "Thursday";
    else if(kq==5) cout << "Friday";
    else if(kq==6) cout << "Saturday";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    if((b!=0 && a/b == c) || ( c!=0 && b/c == a ) || ( a!=0 && c/a == b )) cout << "/";
    else cout << "NOSOL";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,tong=0;
    cin >> n;                           //s=1^2 + 2^2 + ... + n^2;
    for(long long i=1;i<=n;i++){
        tong+=i*i;
    }
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int thu_may(int day, int month, int year)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    int day = thu_may(d, m, y);
    switch (day) {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:                                             //ngày sinh phiên bản không sai
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    default:
        break;
    }

    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int N;
//int dem=0;
string decToBin(int n){
    string ans = "";
    while (n > 0) {
        ans = char (n % 2 + '0') + ans;
        n /= 2;
    }
    while (ans.length() < N)
        ans = "0" + ans;                //Nhập vào số nguyên dương n(2<n<=15). In ra số dãy nhị phân độ dài n. Chẳng hạn với  ta có với n = 2 thì các dãy nhị phân liệt kê theo thứ tự từ điển là 00, 01, 10 ,11. Với  n = 3 ta có các dãy nhị phân 000, 001, 010, 011, 100, 101, 110, 111
    return ans;
}

int main(){
    cin >> N;
    int N_2 = pow(2, N);
    for (int i = 0; i < N_2; i++)
        cout << decToBin(i) << endl;
        //dem++;
    //cout << dem;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
long long giaithua(long long n) {
    long long s = 1;
    for (long long i = 1; i <= n; i++)
        s *= i;
    return s;
}
int main()
{
    long long n;
    cin >> n;
    cout << giaithua(n)%1000000007;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[10000002];
int main()
{
    int n;
    cin >> n;
    vector<int>dau;
    vector<int>cuoi;
    for(int i=0;i<n*2;i++) cin >> a[i];
    for(int i=0;i<n;i++) dau.push_back(a[i]);
    sort(dau.begin(),dau.end());
    for(int i=0;i<dau.size();i++) cout << dau[i] << " ";        //http://laptrinhphothong.vn/Problem/Details/6015
    for(int i=2*n-1;i>=n;i--) cuoi.push_back(a[i]);
    sort(cuoi.begin(),cuoi.end(),greater<int>());
    for(int i=0;i<dau.size();i++) cout << cuoi[i] << " ";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a==b&&b==c&&c==d&&a==c&&a==d||b==c&&c==d&&d==e&&b==d&&b==e||a==b&&b==d&&d==e&&a==d&&a==e||a==c&&c==d&&d==e&&a==d&&a==e||a==b&&b==c&&c==e&&a==c&&a==e) cout <<"YES";
    else cout << "NO"; // Cho 5 số kiểu 64 bit a, b, c, d, e. In ra YES nếu có ít nhất 4 số bằng nhau, in ra NO nếu không thỏa mãn
    return 0;
}

//Cho một đoạn đại số a, b. Tính số lượng số nguyên trong đoạn [a,b] đó

#include <bits/stdc++.h>
using namespace std;
int demsophantukhacbiet(int a[],int n)
{
    int b[n];
    int x=1;
    b[0]=a[0];
    for(int i=1;i<n;i++){
        int dem=0;
        for(int j=0;j<x;j++){
            if(a[i]==b[j])
                dem++;
        }
        if(dem==0){
            b[x]=a[i];
            x++;
        }
    }
    return x;
}
int a[1000];
int main()
{
    int n,dem=0;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    dem=demsophantukhacbiet(a,n);
    cout << dem;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long tongchuso(long long n)
{
    long long tong=0;
    while (n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main()
{
    long long n,m;
    cin >> n >> m;
    long long kq=tongchuso(n)*tongchuso(m)/__gcd(tongchuso(n),tongchuso(m));
    cout << kq;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long a,b,tong=0;
    cin >> a >> b;
    for(long long i=a;i<=b;i++){
        if(i%13!=0) tong+=i;
    }
    cout << tong;
    return 0;
}

//Viết chương trình nhập vào một mảng, in ra số trung vị của mảng. Số trung vị là số có giá trị trung bình trong mảng. Nếu mảng có 2n+1 phần tử thì sau khi sắp xếp phần tử trung vị là phần tử thứ n+1. Nếu mảng có 2n phần tử thì số trung vị là trung bình cộng của hai phần tử ở giữa sau khi sắp xếp mảng.
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    double kq,xetcuoi,xetdau;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];       //phan tu trung vi
    if(n%2!=0){
        sort(a,a+n);
        cout << a[n/2];
    }
    else if(n%2==0){
        sort(a,a+n);
        xetcuoi=a[n/2-1];
        xetdau =a[n/2];
        kq=(xetcuoi+xetdau)/2;
        cout << kq;
    }
    else
        return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin >> n;
    long long t=1;
    for (long long i=1;i<=n;i++)        //giai thua so n & 10^9+7
    {
        t=t*i%1000000007;
        s=t % 1000000007;
    }
    cout << s;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tong=0,kq=0;
    cin >> n;
    for(long long i=1;i<=n;i++){
        tong=tong+(i*i*i)%1000000007;       //Viết chương trình nhập vào số nguyên n. Tính tổng S(n) = 13 + 23+...+n3  Đưa ra tổng S. Vì kết quả có thể rất lớn nên ta chia lấy dư cho 109+7 khi in ra.
        kq=tong%1000000007;
    }
    cout << kq;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n,tong=0,t=1;
    cin >> n;
    for(long long i=1;i<=n;i++)         //Cho tổng   S(n) = 1! = 2! + ... + n! Nhập vào số nguyên dương n(0<n<=10^6). In ra tổng S(n). Kết quả có thể rất lớn nên sẽ chia lấy dư cho 10^9+7
    {
        t=t*i%1000000007;
        tong=tong+t%1000000007;
    }
    cout << tong%1000000007;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long tong=0;
    while(cin >> n)
    {
        tong+=n;        //Tính tổng của một dãy số nguyên chưa biết trước số phần tử
    }
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1)%1000000007 + Fibonacci(n - 2)%1000000007;
}
int main()
{
    ios_base::sync_with_stdio(false);           //so fibonacci thu n chia lay du cho 10e9+7
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << Fibonacci(n) % 1000000007;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tong=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            tong+=i;
    }
    cout << tong;
    return 0;
}

//Một số nguyên dương có n chữ số được gọi là số Armstrong khi tổng các lũy thừa bậc n của các chữ số của nó bằng chính nó.
// Code:
#include <bits/stdc++.h>
using namespace std;
int demcs(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
bool IsArmstrong(int n)
{
    int numDigit = demcs(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10;
        tmp /= 10;
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (IsArmstrong(n) == true) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tong=0;
    cin >> n;
    if(n%3==0) cout << "NO";        //Cho dãy số: 2, 5, 8, 11, ... và 1 số nguyên N. Nếu N thuộc dãy số thì tính tổng dãy số đến số hạng N. Nếu N không thuộc dãy số thì in ra NO
    else{
        for(long long i=2;i<=n;i+=3){
            tong+=i;
        }
        cout << tong;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long demuoc(long long n)
{
    long long dem=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) dem++;
    }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    cout << demuoc(n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << (n%2==0&&n>0?"Yes":"No");
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[10000006];
int main()

{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>luu;             //số lớn hơn k - N0451B - http://laptrinhphothong.vn/Problem/Details/6020
    sort(a,a+n);
    for(int i=0;i<n;i++){       //Cho một dãy N số nguyên và số nguyên k, hãy viết chương trình in ra số nhỏ nhất trong dãy số mà lớn hơn k.
        if(a[i]>k){             // 45 thằng làm được trên ltpt nhá =))
            luu.push_back(a[i]);
            cout << luu.front();
            return 0;
        }
    }
    cout << -1;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long a,b;
    cin >> a >> b;
    long long tong=0;
    for(long long i=a;i<=b;i++) if(i%13!=0) tong+=i; // quá time
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cs=1;
    cin >> n;
    vector<int>a(n);
    for(int i=1;i<=n;i++) cin >> a[i]; //N0405B - Vị trí nhỏ nhất
    for(int i=1;i<=n;i++){
        if(a[1]>a[i]){
            a[1]=a[i];
            cs=i;
        }
    }
    cout << cs;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    cout << distance(a,max_element(a+1,a+n+1));
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool scp(int n)
{
    int i=sqrt(n);
    if(i*i==n) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    int kq=0;
    while(kq<n) {
        if(scp(kq)==true)       //in ra so chinh phuong nho hon n
            cout << kq << " ";
        ++kq;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
bool scp(long long n)
{
    long long i=sqrt(n);
    if(i*i==n) return true;
    else return false;
}
int main()
{
    long long n;
    cin >> n;
    long long kq=10e12;
    //lặp từ kq về n
    while(kq>n) {
    // kiểm tra điều kiện
        if(n<kq && scp(n)==true) { //Viết chương trình nhập vào số nguyên dương X. Đưa ra số chính phương nhỏ nhất không nhỏ hơn X.
            cout << n << " ";
            break;//kết thúc vòng lặp ngay khi tìm được giá trị thỏa mãn
        }
    //tăng giá trị của n lên 1 =))
        ++n;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,tam;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){     //dao nguoc xau
            tam.push_back(s[i]);
        }
    cout << tam;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long n,tong=0;                 // S = 2^2 + 4^2 + ... + (2n)^2 - Tổng lẻ bình phương 2
        cin >> n;
        for(long long i=0;i<=2*n;i+=2){
            if(i%2==0)
             tong+=i*i;
        }
        cout << tong << endl;
    }
    return 0;
}


//N0210C - Số thuộc đoạn
#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);        // Cho một đoạn đại số a, b. Tính số lượng số nguyên trong đoạn [a,b] đó.
    long double a,b;
    cin >> a >> b;
    long long x=a,y=b;
    if(x<a) x++;
    if(y>b) y--;
    cout << y-x+1;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool snt(int a)
{
    if(a==0 || a==1)
        return false;
    else
        for(int i=2;i<=sqrt(a);i++)
        {
            if (a%i==0) return false;
        }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,b;
    cin >> a >> b;
    if(a>b) cout << -1;
    else{
        for(int i=a;i<=b;i++)
        {
            if(snt(i)){
                cout << i << " ";
            }
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
    int n,tong=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]=abs(a[i]);
    }
    sort(a,a+n);
    cout << a[n-1]+a[n-2];
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n,cs;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    int max=a[1];
    for(int i=1;i<=n;i++){  //vị trí của phần tử lớn nhất. nếu có 2 p tử lớn nhất trở lên thì in ra vị trí cuối cùng
        if(max<=a[i]){
            max=a[i];
            cs=i;
        }
    }
    cout << cs;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    string a=s,temp;
    for(int i=s.size()-1;i>=0;i--){
        temp.push_back(s[i]);
    }
    if(temp == a) return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,aa,b,bb;
    cin >> a >> aa >> b >> bb;
    int tonga=a+aa, tongb=b+bb;
    string tongstra=to_string(tonga);
    string tongstrb=to_string(tongb);
    string tongstrab=tongstra+tongstrb;  //Viết chương trình nhập vào các cặp số (a,b). Tính tổng a+b và ghép chúng thành một xâu ký tự. Kiểm tra xem xâu ký tự đó có đối xứng hay không?
    if(doixung(tongstrab)==true) {       //Phiên bản lỗi
        cout << "YES";
        break;
    } else {
        cout << "NO";
        break;u
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a[10000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int>dau;
    vector<int>cuoi;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n/2;i++) dau.push_back(a[i]);
    sort(dau.begin(),dau.end());
    for(int i=0;i<dau.size();i++) cout << dau[i] << " ";            //sap xep mang chia doi 2
    for(int i=n-1;i>=n/2;i--) cuoi.push_back(a[i]);
    sort(cuoi.begin(),cuoi.end(),greater<int>());
    for(int i=0;i<dau.size();i++) cout << cuoi[i] << " ";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool xaudoixung(string s){
    string temp=s;
    string luu;
    for(int i=s.size()-1;i>=0;i--){
        luu.push_back(s[i]);
    }
    if(luu==temp) return true;
    else return false;
}
int main(){
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int tong1=a1+a2;
    int tong2=b1+b2;
    string s=to_string(tong1), ss=to_string(tong2);
    string tong=s+ss;
    if(xaudoixung(tong)==true) cout << "YES";
    else cout << "NO";
    return 0;

#include <iostream>
#include <cmath>

using namespace std;

long long coundiv(long long n) {
    long long kq = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                kq++;
            } else {
                kq += 2;
            }
        }
    }
    return kq;          ///dem uoc
}
int main() {
    long long n;
    cin >> n;
    cout << coundiv(n);
    return 0;
}


// in ra dãy nhị phân có độ dài n
#include <iostream>
#include <math.h>

using namespace std;

int N;

string decToBin(int n){
    string ans = "";
    while (n > 0) {
        ans = char (n % 2 + '0') + ans;
        n /= 2;
    }
    while (ans.length() < N)            //sinh nhị phân
        ans = "0" + ans;
    return ans;
}

int main(){
    cin >> N;
    int N_2 = pow(2, N);
    for (int i = 0; i < N_2; i++)
        cout << decToBin(i) << endl;
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long double tong=0;
    for(long double i=1;i<=n;i++){
        tong+=i*i;
    }
    cout << (long long)(tong)%100;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[106][106];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int dem=0;
    vector<int>luu;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            luu.push_back(a[i][j]);         //biến đổi mảng cách 1(tự nhập) đọc code tự hiểu
        }
    }
    for(int i=0;i<luu.size();i++){
        if(luu[i]%2!=0) luu[i]+=1;
        else if(luu[i]%2==0) luu[i]-=1;
    }
    for(int i=0;i<luu.size();i++){
        dem++;
        cout << luu[i] << " ";
        if(dem%n==0) cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[106][106];
vector<int>luu;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int Max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            luu.push_back(a[i][j]);
        }
    }
    for(int i=0;i<luu.size();i++){
        if(luu[i]%2==0){
            if(Max<luu[i])
                Max=luu[i];
        }
    }
    cout << Max;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[106][106];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){   //Viết chương trình nhập vào một ma trận vuông. In ra ma trận sau khi xoay nó 1 góc 90 độ ngược chiều kim đồng hồ
            cin >> a[i][j];        // HACK VL
        }
    }
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<n;i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[106][106];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){   //xoay 1 gocs 90 độ theo kim đh
            cin >> a[i][j];
        }
    }
    for(int j=0;j<n;j++){
        for(int i=n-1;i>=0;i--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
vector<int>luu;
int main()
{
    int n,dem=0;
    cin >> n;
    for(int i=1;i<=n*n;i++){
        luu.push_back(i);
    }
    for(int i=0;i<luu.size();i++){
        if(luu[i]%2!=0) luu[i]+=1;  //biến đổi ma trận phiên bản nhập 1 số n nhưng      SAI     (1)
        else luu[i]-=1;
    }
    for(int i=0;i<luu.size();i++){
        dem++;
        cout << luu[i] << " ";
        if(dem%n==0) cout << endl;
    }
    return 0;
}
*/

/*#include <bits/stdc++.h>
using namespace std;
vector<int>luu;
int A[3][3];
int hang,cot;
int main()
{
    int n,dem=0;
    cin >> n;
    /*for(int i=1;i<=n*n;i++){
        luu.push_back(i);
    }

    for(int i=0;i<luu.size();i++){
        //if(luu[i]/2!=1) luu[i]+=1;
        //else luu[i]-=1;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[hang][cot];
        }
    }

    hang=n; cot=n;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(A[hang][cot]%2==0)
            {
                A[hang][cot]-=1;
            }
            else
            {
                A[hang][cot]+=1;
            }
        }
    }
    for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout<<A[hang][cot];
        }
    }
 */
    /*for(int i=0;i<luu.size();i++){
        dem++;
        cout << luu[i] << " ";
        if(dem%n*n==0) cout << endl;
    }
    return 0;
}

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
        int cs1=a[i]-48;                //Cho dãy số Fibonacci có công thức: F1 = F2 = 1, Fn = F(n-1) + F(n-2) với mọi số nguyên n lớn hơn 2. Ta có thể liệt kê một số phần tử đầu tiên như sau: 1, 1, 2, 3, 5, 8, 13, 21,...Vấn đề đặt ra là ta muốn tìm số Fibonacci thứ k với nhiều câu hỏi, nghĩa là cần hỏi một lúc nhiều số Fibo
        int cs2=b[i]-48;
        nho =cs1+cs2+nho;               //(k<=70)
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    if(nho>0)
        kq='1'+kq;
    return kq;
}

int main()
{
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n;
        cin >> n;
        if(n==1 || n==2)
            cout << 1;
        string a,b,c;
        a="1";
        b="1";
        for(int i=3;i<=n;i++)
        {
            c=cong(a,b);
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1000002];
int main()
{
    long long n;
    cin >> n;
    a[1]=a[2]=1;
    for(long long i=3;i<=n;i++){ //(un) thỏa mãn u1 = u2 = 1 và un = 2un-1 -un-2 với mọi số tự nhiên n >2. Nhập vào số nguyên dương n (0<n<=106). In ra số hạng thứ n của dãy.
        a[i]=(2*a[i-1])-a[i-2];
    }
    cout << a[n];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])) temp.push_back(s[i]);
    }
    cout << temp;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    string a=s,temp;
    for(int i=s.size()-1;i>=0;i--){
        temp.push_back(s[i]);
    }
    if(temp == a) return true;
    else return false;
}
int main()
{
    string s, temp;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i]) && s[i]!='0' && s[i]!='2' && s[i]!='4' && s[i]!='6' && s[i]!='8') temp.push_back(s[i]);
    }
    if(doixung(temp)==true) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long a[1000002];
int main()
{
    long long n;
    cin >> n;
    a[1]=a[2]=1;
    for(long long i=3;i<=n;i++){
        a[i]=(3*a[i-1]-a[i-2])%1000000007;
    }
    cout << a[n]%1000000007;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]) && isalpha(s[i]) && s.size()>=5){
            cout << s.size();
            break;
        } else {
            cout << "Error!";
            break;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int N, K, dem = 0, t = 0;           //gia công sản phẩm
    cin >> N >> K;
    while (t < N) {
        t += K;
        K *= 2;
        dem++;
    }
    cout << dem;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long n,tong=0;                 //S = 2^2 + 4^2 + ... + (2n)^2 - tổng chẵn bình phương
        cin >> n;
        for(long long i=0;i<=2*n;i+=2){
            if(i%2==0)
             tong+=i*i;
        }
        cout << tong << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp; int dem=0;
    cin >> s;
    for(int i=0;i<=s.size()-1;i++){
        if( s[i]!='0' && s[i]!='2' && s[i]!='4' && s[i]!='6' && s[i]!='8') temp.push_back(s[i]);
    }
    for(int i=1;i<=temp.size();i++){
        dem=i;
    }
    cout << dem;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp; cin >> s;
    char xoa; cin >> xoa;
    for(int i=0;i<=s.size()-1;i++){
        if(s[i]!=xoa) temp.push_back(s[i]);  // xoa ki tu trong xau 1
    }
    cout << temp;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[103][103];
int main()
{
    //tạo mảng 2 chiều
    int n,dem=0,x=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=x;
            x++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                a[i][j]+=1;
            }
            else if((i+j)%2!=0){
                a[i][j]-=1;
            }
        }
    }
    for(in{t i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,dem=0; cin >> n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            dem+=2;
        }
    }
    long long x=sqrt(n);
    if(x*x==n) dem--;
    cout << dem;
    return 0;
}

/*Yêu cầu: Cho dãy số nguyên dương a1, a2, ..., an và số dương n. Đếm xem có bao nhiêu bộ chỉ số i, j thỏa mãn:

+) ai+ ai+1+...+aj=k

+) 1<=i<j<=n
Dữ liệu:

- Dòng 1 ghi 2 số nguyên dương n, k (0<n<=2000, k<1018)

- Dòng 2 ghi n số nguyên dương a1, a2, ...an.

Kết quả:

- In ra số lượng cặp (i, j) thỏa mãn yêu cầu
#include <bits/stdc++.h>
using namespace std;
int a[2005];
int main()
{
    int n; cin >> n; long long k; cin >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    int dem=0;
    for(int i=0;i<n;i++){
        long long tong=0;
        for(int j=i;j<n;j++){
            tong+=a[j];
            if(tong==k){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}


/*Cho dãy số nguyên 𝐴 gồm 𝑁 phần tử 𝑎1, 𝑎2, … , 𝑎𝑁.
Yêu cầu: Gồm 𝑄 truy vấn, mỗi truy vấn gồm một cặp số nguyên dương (𝐿,𝑅) và nhiệm vụ của
bạn là mỗi truy vấn cần in ra tổng các số nguyên trên dãy 𝐴 từ vị trí 𝐿 đến vị trí r
#include <bits/stdc++.h>
using namespace std;
int a[100005],f[100005];
int main()
{
    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    f[0]=0;
    for(int i=1;i<=n;i++) f[i]=f[i-1]+a[i];
    int q,l,r; cin >> q;
    for(int i=1;i<=q;i++){
        cin >> l >> r;
        cout << f[r]-f[l-1] << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int tong=0,min=a[0],max=a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]) min=a[i];
        else if(max<a[i]) max=a[i];             //abs
    }
    cout << abs(max-min);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i]=abs(a[i]);
    }
    int tong=0,min=a[0],max=a[0];
    for(int i=0;i<n-1;i++){
        if(min>a[i]) min=a[i];
    }
    for(int i=0;i<n;i++){
        if(max<a[i]) max=a[i];
    }
    cout << max+min;
    return 0;
}

#include <iostream>

using namespace std;

string nhan(string a,long long b)
{
    string kq="";
    long long nho=0;
    int n=a.size();
    for(int i=n-1;i>=0;i--)
    {
        int cs=a[i]-48;
        nho=cs*b+nho;
        kq=char(nho%10+48)+kq;                  //phép mod 3
        nho=nho/10;
    }
    while(nho>0)
    {
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    return kq;
}
long long chia(string a, long long b) {
    string kq = "";
    long long du = 0;
    for (int i = 0; i < a.size(); i++) {
        du = du * 10 + (a[i] - '0');
        kq += char(du / b + '0');
        du %= b;
    }
    while (kq[0] == '0' && kq.size() > 1) {
        kq.erase(0, 1);
    }
    return du;
}

int main() {

    string a;
    long long b,c;
    cin >> a >> b >> c;
    cout << chia(nhan(a,b),c);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long double Delta(double a,double b,double c){
    long double kq=(b*b)-(4*a*c);
    return kq;
}
int main()
{
    double a,b,c; cin >> a >> b >> c;
    long double delta=Delta(a,b,c);
    if(delta>0){
            if(2*a > 0){
                long double x1=(-b+sqrt(delta)) / (2*a); // giai pt bac 2
                long double x2=(-b-sqrt(delta)) / (2*a);
                if(x1*x2 < 0) cout << 2;
                else if(x1*x2 > 0) cout << 1;
                else cout << 0;
            }
    }
    else if(delta==0){
        long double x=-b/(2*a);
        if(x!=0) cout << 3;
    }
    else cout << -1;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%10==0) cout << endl;       //in cac so tu 1 den n, 10 so 1 dong =))
        cout << i << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int f[1000003];
int main()
{
    long long n; cin >> n;
    f[1]=f[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
        f[i]=f[i]%1000000007;    //Tính số Fibonacci thứ n, kết quả có thể rất lớn nên ta phải chia lấy dư cho 1000000007
    }
    cout << f[n];
    return 0;
}

//Trong đầm lầy nơi chú ếch loại N sống hoa súng mọc thành một dãy dài, các cụm hoa súng được đánh số từ 1 trở đi từ trái sang phải. Ban đầu chú ếch thuộc loại N và chú đang ngồi trên lá ở cụm hoa thứ K (1 ≤ N < K ≤ 2×109). Chú ếch sẽ nhảy sang trái với bước nhảy là N cụm, tức là từ cụm K sang cụm K – N, rồi sang cụm K – 2N, K – 3N, . . . cho đến khi tới cụm M ≤ N. Nếu M = N thì chú ếch sẽ cảm thấy rất thoải mái và không nhảy đi đâu cả.

//Nếu M < N thì ếch sẽ nhảy sang phải một bước N, trở thành loại M và lại nhảy sang trái với các bước là M. Chú ếch sẽ tìm thấy cụm thoải mái hay trở thành loại L và lại nhảy tiếp.

//Yêu cầu: Cho N và K. Hãy xác định xem chú ếch có tới được cụm thấy thoải mái hay không và nếu có – đó là cụm nào.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    while(n!=k){
        if(k>n) k-=n;
        else{
            if(k<n){
                k+=n;           //ech nhay
                n=k-n;
            }
        }
    }
    cout << k;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin >> n;
    long long tong=0;
    for(long long i=1;i<=n;i++){            //ghi nho - cau truc lap -ltpt
       tong+=(i*i);
    }
    if((tong%100)<10) cout << 0 << tong%100;
    else cout << tong%100;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tong=0; cin >> n;
    for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0) tong+=i+(n/i);
        else if((sqrt(n)*sqrt(n))==n) tong=tong-sqrt(n);  											 //  tổng ước
    }
    cout << tong;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
long long u[1000006];
int main()
{
    long long n;
    cin >> n;
    u[1]=1;
    u[2]=1;
    for(long long i=3;i<=n;i++)
    {
         u[i]=(3*u[i-1]-u[i-2])%1000000007;
    }
    if (u[n]<0) cout << (u[n]+1000000007)%1000000007;
    else cout << u[n];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    if(n==0 || n==1) return false;
    else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
    }
    return true;
}
int main()
{
    int a,b,dem=0; cin >> a >> b;   							 // in ra so nguyen to trong doan tu a den b
    for(int i=a;i<=b;i++){
        if(snt(i)){
            dem++;
            cout << i << " ";
        }
    }
    if(dem==0) cout << -1;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int Min=a[0],Max=a[0];
    for(int i=0;i<n;i++){
        if(Min>a[i]) Min=a[i];
        else if(Max<a[i]) Max=a[i];
    }
    cout << Max-Min;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; cin >> a >> b;
    while(a.size()<b.size()) a='0'+a;
    while(a.size()>b.size()) b='0'+b;   ///Nhập vào 2 số, so sánh 2 số mỗi số giới hạn 1000 chữ số
    if(a<b) cout << -1;
    else if(a>b) cout << 1;
    else cout << 0;
    return 0;
}



//Mr X cần gửi một văn bản quan trọng tới các coder của mình. Để đảm bảo tính bảo mật của thông tin được ghi trong văn bản, ông quyết định sẽ mã hóa văn bản trước khi gửi. Văn bản là một xâu S gồm các chữ cái latinh thường. Ông ấy chia đoạn văn bản thành hai đoạn liên tiếp nhau là Sa và Sb. Lần lượt viết các xâu Sa và Sb theo thứ tự ngược lại ta nhận được xâu mã hóa Q. Ví dụ, nội dung bức thư S = ‘programming’ với với khóa k = 7 sẽ được chia  thành 2 đoạn: Sa = ‘program’, Sb = ‘ming’, nhận được xâu mã hóa Q = ‘margorpgnim’. Để cho coder của mình có thể hiểu được nội dung bức thư ông ấy đã gửi kèm theo xâu mã hóa Q là một số nguyên dương k cho biết độ dài xâu Sa. Bạn hãy giải mã bức thư này.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key; cin >> key;
    string s,sa,sb;
    cin >> s;
    sa=s.substr(0,key);
    sb=s.substr(key,s.size());
    for(int i=sa.size()-1;i>=0;i--) cout << sa[i];
    for(int i=sb.size()-1;i>=0;i--) cout << sb[i];
    return 0;
}



//Viết chương trình nhập vào một văn bản là một chuỗi kí tự và có thể chứa các kí tự cách trống. Đếm số từ trong chuỗi ký tự đó.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; getline(cin,s);
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')dem++;
    }
    cout << dem+1;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n==0 || n==1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
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
int main()
{
    long long n; cin >> n;
    if(snt(tongChuSo(n))) cout << "YES";
    else cout << "NO";
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
long long uoc(long long n)
{
    long long tong=0;
    for(long long i=1;i<=sqrt(n);i++){
        if(n%i==0) tong+=i+(n/i);
        else if((sqrt(n)*sqrt(n))==n) tong=tong-sqrt(n);
    }
    return tong;
}
int main()
{
    long long n; cin >> n;
    cout << uoc(n);
    return 0;
}

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
int main()
{
    long long a,b; cin >> a >> b;
    cout << tongChuSo(a)+tongChuSo(b);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
    long long n; cin >> n;
    for(long long i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(long long i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[100008],f[100008];
vector<int>chiso;
int main()
{
    int n,kq=1,dem=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==1){
            dem++;
        }
    }
    if(dem==0){
        cout << -1;
        return 0;
    }
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]==1 && a[j]==1)
                {
                    f[i]=f[j]+1;
                }
            else
                f[i]=1;
        }
        kq=max(kq,f[i]);
    }
    cout << kq << endl;
    for (int i = n ; i > 0; i--) {
        if (f[i] == kq) {
            chiso.push_back(i);
            --kq;
        }
    }
    reverse(chiso.begin(), chiso.end());
    for (int i = 0; i < chiso.size(); i++) {
        cout << a[chiso[i]] << " ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
long long tongChuSo(long long n){
    long long sum=0;
    if(n<0) return 0;
    else{
        for(long long i=n;i>0;i/=10){
            sum+=i%10;
        }
        return sum;
    }
}
int main()
{
    long long a,b,csa,csb;
    cin >> a >> b;
    csa=tongChuSo(a);
    csb=tongChuSo(b);
    cout << csa*csb/__gcd(csa,csb);
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                a[j]=a[j+1];
                n--;
                i--;
            }
        }
    }
    sort(a,a+n);
    cout << a[n/2];
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                a[j]=a[j+1];
                n--;
                i--;
            }
        }
    }
    for(int i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}

//Viết chương trình tìm số nguyên tố lớn nhất không vượt quá n (0 < n ≤ 107).
#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n==0 || n==1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    long long kq=2;
    while(kq<n) {
        if(n>kq && snt(n)==true) {
            cout << n;
            break;
        }
        --n;
    }
    return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6;

int a[N];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a + n);
    int cnt = 1;
    for(int i = 1; i < n;i++){
        if(a[i] == a[i-1]) ++cnt;
        else{
            cout  << a[i-1] << " " << cnt << endl;
            cnt = 1;
        }
    }
    cout  << a[n-1] << " " << cnt;

}


#include <bits/stdc++.h>
using namespace std;
bool snt(const long long &n) {
     if( n < 2) return false;
     if(n == 2 || n == 3) return true;
     if( n%2 == 0 || n% 3 ==0) return false;
     long long j = (long long)(sqrt(n));
     long long k = 4;
     for(long long i = 5 ; i <= j; i += k, k = 6 - k)
        if ( n%i == 0) return false;
     return true;
}
int main() {
    long long n = 999, vt;
    cin >> vt;
    long long dem = 0;
    for( long long i = 2 ; i <= n; ++i) {                                         //http://laptrinhphothong.vn/Problem/Details/5688
      if(snt(i))
         ++dem;
      if(dem == vt) {
         cout  << i << endl;
         break;
      }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int souoc(long long n) {
    int kq = 0;
    for (long long i = 1; i <= sqrt(n); i++) {                                      ///dem uoc
        if (n % i == 0) {
            kq+=2;
        }
    }
    long long x=sqrt(n);
    if(x*x==n) kq--;
    return kq;
}
long long a[1000005];
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(souoc(a[i])==3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cc=0,cs=0;
    string s;
    cin >> s;
    for(long long i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9') cs=1;
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z') cc=1;
    }
    if(cs!=1 && cc!=1 && s.size()>=5) cout << s.size();
    else cout << "Error!";
    return 0;
}



//Viết chương trình nhập vào một văn bản là một chuỗi kí tự bao gồm chữ cái la tinh thường. Hãy in ra số lượng các ký tự phân biệt trong chuỗi
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> se;    //kiểu dữ liệu chỉ cho phần tử xuất hiện duy nhất 1 lần
    for (int i = 0; i < s.size(); i++) {
        se.insert(s[i]);
    }
    cout << se.size();
}


#include <bits/stdc++.h>

using namespace std;
int a[1000006];
int main() {
    int n; cin >> n;
    set<int> tuoi;
    for(int i=0;i<n;i++){
        cin >> a[i];                    //tinh tuoi
    }
    for(int i=0;i<n;i++){
        tuoi.insert(a[i]);
    }
    cout << tuoi.size();
    return 0;
}


//Cho một xâu kí tự bất kì (gồm cả chữ và số). Viết chương trình tách các phần là số của xâu đó và in ra màn hình các số tách được

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    vector<string> so;
    string t = "";
    s += 'a';
    for (int i = 0; i < s.size(); i++) {                http://laptrinhphothong.vn/Problem/Details/5918
        if (isdigit(s[i])) {
            t += s[i];
        } else {
            if (t != "") {
                so.push_back(t);
                t = "";
            }
        }
    }
    for (auto i : so) {
        cout << i << " ";
    }
}



// Nhập vào từ bàn phím 1 số nguyên N ( N <= 10^100). Hãy viết chương trình Xóa đi các chữ số chẵn của số đó. Kiểm tra số còn lại có phải số đối xứng không?
#include <bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    string xet=s;
    reverse(s.begin(),s.end());
    if(xet==s) return true;
    else return false;
}
int main()
{
    string s,ss=""; getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'&&s[i]!='2'&&s[i]!='4'&&s[i]!='6'&&s[i]!='8'){
            ss+=s[i];
        }
    }
    if(doixung(ss)==true) cout << "YES";
    else cout << "NO";
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
bool doixung(string s)
{
    string xet=s;
    reverse(s.begin(),s.end());
    if(xet==s) return true;
    else return false;
}
int main()
{
    string s,ss=""; getline(cin, s);
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'&&s[i]!='2'&&s[i]!='4'&&s[i]!='6'&&s[i]!='8'){
            ss+=s[i];
        }
    }
    if(doixung(ss)==true) cout << "YES";
    else cout << "NO";
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
string nhan(string a,long long b)
{
    string kq="";
    long long nho=0;
    long long n=a.size();
    for(long long i=n-1;i>=0;i--)
    {
        long long cs=a[i]-48;
        nho=cs*b+nho;
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    while(nho>0)
    {
        kq=char(nho%10+48)+kq;
        nho=nho/10;
    }
    return kq;
}
int main()
{

    string a;
    long long b;
    cin >> a >> b;
    cout << nhan(a,b);
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

long long souoc(long long n) {
    int kq = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            kq+=2;
        }
    }
    int x=sqrt(n);
    if(x*x==n) kq--;
    return kq;
}
long long a[1000005];
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(souoc(a[i])==3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


                ///N0306B
#include <bits/stdc++.h>
using namespace std;
const long long m=10e9+7;
long long n,t=1;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++){                  //  tính giai thừa chi dư cho 10e9+7
        t=(t*i)%m;
    }
    cout << t;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[30005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int tong=0,tich=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            tich=a[i]*a[j];tong+=tich;
        }
    }
    cout << tong;
    return 0;
}

                ///N0317B - Tính tổng     _     Cho S = 1 + 1/2 + 1/3 + ... + 1/n. Nhập vào số thực A  hãy tìm số nguyên dương n nhỏ nhất sao cho S > A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s=1,a;
    int n=1;
    cin >> a;
    while(s <= a){
        n=n+1;
        s += (1.0/n);
    }
    cout << n;
    return 0;
}



            /// Hãy tìm trong dãy số trên một số nguyên bằng tổng tất cả các số nguyên còn lại.    http://laptrinhphothong.vn/Problem/Details/6017

#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==tong-a[i]){
            cout << a[i];
            return 0;
        }
    }
    cout << "N";
    return 0;
}

                /// in ra bộ số pytago
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<5) cout << -1;   /// hoặc ở dòng   if(a<b && b<c && a*a + b*b == c*c)   cho biến đếm tăng . Nếu d==0 thì cout << -1 và bỏ dòng điều kiện ở đầu
    else{
        for(int a=1;a<=n;a++){
            for(int b=1;b<=n;b++){
                for(int c=1;c<=n;c++){
                    if(a<b && b<c && a*a + b*b == c*c){
                        cout << a << " " << b << " " << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int dem=1,kq=0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i+1]){
            dem++;
            kq=max(kq,dem);
        }
        else dem=1;
    }
    cout << kq;
    return 0;
}


                /// Kiểm tra nguyên tố cách 2  - hàm kiểm tra nguyên tố = cách đếm ước
#include <bits/stdc++.h>
using namespace std;
bool snt2(long long n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) dem+=2;
    }
    int x=sqrt(n);
    if(x*x==n) dem-=1;
    if(dem==2) return true;
    else return false;
}
int main()
{
    long long n;
    cin >> n;
    if(snt2(n)==true) cout << "YES";
    else cout << "NO";
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
bool snt2(long long n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) dem+=2;
    }
    int x=sqrt(n);
    if(x*x==n) dem-=1;
    if(dem==2) return true;
    else return false;
}
long long a[1005];
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){               // đếm số nguyên tố trong dãy số
        cin >> a[i];
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(snt2(a[i])==true) dem++;
    }
    cout << dem;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
bool snt2(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) dem+=2;
    }
    int x=sqrt(n);
    if(x*x==n) dem-=1;
    if(dem==2) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,b,dem=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(snt2(i)==true) dem++;
    }
    cout << dem;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cc=0, cs=0 ,db=0;
    for(int i=0;i<s.size();i++){
        if((isdigit(s[i])==false && isalpha(s[i])==false)) db=1;            ///password - ltpt
        if(isalpha(s[i])) cc=1;
        if(isdigit(s[i])) cs=1;
    }
    if(s.size() >=5 && cc==1 && cs==1 && db==0) cout << s.size();
    else cout << "Error!";
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main() {
  int a,N;
  cin >> a >> N;
  bool check[N + 1];
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {         //in ra số nguyên tố từ a đến N https://nguyenvanhieu.vn/thuat-toan-sang-nguyen-to-eratosthenes/
        check[j] = false;
      }
    }
  }
  for (int i = a; i <= N; i++) {
    if (check[i] == true) {
      cout << i << " ";
    }
  }
}


#include <bits/stdc++.h>
using namespace std;
int tongChuSo(int n){
    long long sum=0;
    if(n<0) return 0;
    else{
        for(int i=n;i>0;i/=10){
            sum+=i%10;
        }
        return sum;
    }
}
bool snt2(int n)
{
    int dem=0;
    for(int i=1;i<=sqrt(n);i++){    // đếm ước xét số nguyên tố cho nhanh =))
        if(n%i==0) dem+=2;
    }
    int x=sqrt(n);
    if(x*x==n) dem-=1;
    if(dem==2) return true;
    else return false;
}
int main()
{
    int n;
    cin >> n;
    int kq=2;
    while(kq<n){
        kq++;
        if(snt2(kq)==true && snt2(tongChuSo(n))==true)
            cout << kq << " ";
    }
    return 0;
}


#include <iostream>

using namespace std;

string cong(string num1, string num2) {
    string kq = "";
    int so = 0;
    while (num1.size() < num2.size()) num1 = '0' + num1;
    while (num1.size() > num2.size()) num2 = '0' + num2;
    int n = num1.size();
    for (int i = n - 1; i >= 0; i--) {
        so = (num1[i] - '0') + (num2[i] - '0') + so;
        kq = char((so % 10) + '0') + kq;
        so /= 10;
    }
    if (so > 0) {
        kq = '1' + kq;
    }
    return kq;
}

int main() {
   string f[1001];
    f[1] = "1", f[2] = "1";
    for (int i = 3; i <= 1000; i++) {
        f[i] = cong(f[i - 1], f[i - 2]);
    }
    int n;
    while (cin >> n) {
        cout << f[n] << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,k; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> k;
    long long tong=0;
    for(int j=0;j<k;j++){
        tong+=a[j];
    }
    cout << tong;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[2*100005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int dem=1,Max=0,kq=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]) dem++;
        }
    }
    cout << dem;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long a,x; cin >> a >> x;
    if(a!=0 && x%a==0) cout << "YES";
    else cout << "NO";
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
long long uoc(long long a, long long b, long long c){
    long long kq=__gcd(a,__gcd(b,c));
    return kq;
}
int main()
{
    long long a,b,c; cin >> a >> b >> c;
    cout << uoc(a,b,c);
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{
    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int dem=0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[n]) dem++;
    }
    cout << dem << endl << a[n];
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int a[1000005];
int main()
{
    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int max=0,dem=1;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i+1]){
            dem++;                      // in ra số lần xuất hiện nhiều nhất
            if(max<dem){
                max=dem;
            }
        }
        else dem=1;
    }
    cout << max;
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n;
  map<int, int> m;
  int kq = 0;
  for (int i = 1; i <= n; i++) {            http://laptrinhphothong.vn/Problem/Details/4604
    cin >> x;
    m[x]++;
    kq = max(kq, m[x]);
  }
  cout << kq;
}


#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    int dem=0,k;

    for(int i=0;i<n;i++){ k=a[i];
        if(a[i]>=k) {
            dem++;
        }
        if(dem==k){
            cout << k;
            return 0;
        }
    }
    cout << 0;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    sort(s.begin(),s.end());  // N0613B Cho một số nguyên dương X. Hãy tìm ra chữ số lớn nhất trong số nguyên dương X x<=10^100
    cout << s[s.size()-1];
    return 0;
}




 //N0307C - Số dãy nhị phân : chỉ tính 2 mũ n  http://laptrinhphothong.vn/Problem/Details/4577

// in ra phần tử lẻ nhỏ nhất
#include <bits/stdc++.h>
using namespace std;
int a[100006];
int main() {
    int n,x,m=0; cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(x%2==1){
            m++;
            a[m]=x;
        }
    }
    int min=a[1];
    for(int i=2;i<=m;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout << min;
    return 0;
}



//đếm số lần xuất hiện nhiều nhất
#include <bits/stdc++.h>
using namespace std;
int ts[1000006];
int main(){
    int a,temp;
    int max=0;
    int n; cin >> n;
    for(int i=0;i<n;i++){           //http://laptrinhphothong.vn/Problem/Details/5887
        cin >> a;
        ts[a]++;
        if(max<ts[a]){
            max=ts[a];
        }
    }
    cout << max;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
    int n,q,l,r; cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int k=1;k<=q;k++){
        cin >> l >> r;int dem=0;                    //N0411C - Số cặp nghịch thế - http://laptrinhphothong.vn/Problem/Details/5998
        for(int i=l;i<r;i++){

            for(int j=l+1;j<=r;j++){
                if(a[i]>a[j]&&i<j){
                    dem++;
                }
            }
        }cout << dem << endl;

    }
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    unordered_map<char, int> m;
    int index = 0;
    for (int i = 0; i < s.size(); i++) {            //N0620B - Xóa kí tự trong xâu 2 - http://laptrinhphothong.vn/Problem/Details/5747
        if (m[s[i]] == 0) {
            s[index++] = s[i];
            m[s[i]]++;
        }
    }
    for (int i = 0; i < m.size(); i++) {
        cout << s[i];
    }
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l, r, s1, s2;
    cin >> l >> r;
    s1=(r-l+1)*(l+r)/2;             // PK0033C - BOICUA13 - http://laptrinhphothong.vn/Problem/Details/5979
    l=l+13-(l%13);
    r=r-(r%13);
    s2=((r-l)/13+1)*(l+r)/2;
    cout << s1-s2;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    int n,dem=0; cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout << a[n]-a[1];
    return 0;
}


#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<char,int> map;
    string s; cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){                             //N0617B - Số kí tự phân biệt 2 - http://laptrinhphothong.vn/Problem/Details/5742
            s[i]-=32;
        }
    }
    for(int i=0;i<s.size();i++){
        map[s[i]]++;
    }
    for(auto i : map){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
	int n, dem = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i=0;i<n-1;i++) {
    	int j=i+1;
    	while (j<n) {
    	    if (a[i]==a[j]) {
        	    for (int k=j;k<n-1;k++) a[k]=a[k+1];                //N0434B - Dãy phân biệt - http://laptrinhphothong.vn/Problem/Details/5776
    	        n=n-1;
    	    }
            else j=j+1;
        }
    }
    n--;
	for (int i = 0; i < n+1; i++) {
		cout << a[i] << " ";
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main() {
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m=0;
    for(int i=0;i<n-1;i++){
        int dem=0;
        for(int j=i+1;i<n;j++){
            if(a[i]%2==0 && a[j]%2==0){
                dem++;
            }
        }
        if(m<dem){
            m=dem;
        }
    }
    cout << m;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long xa,ya,xb,yb,xc,yc;
 cin>>xa>>ya>>xb>>yb>>xc>>yc;
 if ((yc-ya)*(xb-xa)==(xc-xa)*(yb-ya))          // 3 diem thang hang
 cout<<"YES";
 else cout<<"NO";
 return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;
int a[1000005],b[1000005],c[2000015];
int main()
{
    int n; cin >> n;
    int m=n,cs=0;
    for(int i=0;i<n;i++) cin >> a[i];               //trộn mảng - http://laptrinhphothong.vn/Problem/Details/4608
    for(int i=0;i<m;i++) cin >> b[i];
    for(int i=0;i<n;i++){
            c[cs]=a[i]; cs++;
    }
    for(int i=0;i<m;i++){
            c[cs]=b[i]; cs++;
    }
    sort(c,c+n+m,greater<int>());
    for(int i=0;i<n+m;i++) cout << c[i] << " ";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    double kq,xetcuoi,xetdau;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];               //N0421D - phan tu trung vi
    if(n%2!=0){
        sort(a,a+n);
        cout << a[n/2];
    }
    else if(n%2==0){
        sort(a,a+n);
        xetcuoi=a[n/2-1];
        xetdau =a[n/2];
        kq=(xetcuoi+xetdau)/2;
        cout << kq;
    }
    else
        return 0;
}


#include <bits/stdc++.h>
using namespace std;
long long a[100005],n,t,k;
int main(){
    cin >> n;
    for(long long i=1;i<=n;i++){                        //N0419C - Giá trị nhỏ nhất đến phần tử thứ k - http://laptrinhphothong.vn/Problem/Details/5606
        cin >> a[i];
    }
    cin >> t;
    for(long long j=1;j<=t;j++){
        cin >> k;
        cout << *min_element(a+1,a+k+1) << '\n';

    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000006],f[1000006];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,cs,kq = 1; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        f[i] = 0;
        for (int j=0; j<i; j++){
            if (a[j]%2!=0 && a[i]%2!=0) f[i] = f[j]+1;              //N0426D - Đoạn con số lẻ - http://laptrinhphothong.vn/Problem/Details/5926
            else f[i]=1;
        }
        if(kq<f[i]){
            kq=f[i]; cs=i;
        }
    }
    cout << kq << endl;
    for (int i = cs - kq + 1; i <= cs; i++) cout << a[i] << " ";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int a[1000006],f[1000006];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,cs,kq = 1; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];              //N0422D - Đoạn con số chẵn
    for (int i=1; i<=n; i++) {
        f[i] = 0;
        for (int j=0; j<i; j++){
            if (a[j]%2==0 && a[i]%2==0) f[i] = f[j]+1;
            else f[i]=1;
        }
        if(kq<f[i]){
            kq=f[i]; cs=i;
        }
    }
    cout << kq << endl;
    for (int i = cs - kq + 1; i <= cs; i++) cout << a[i] << " ";
    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){     //tính tuổi
        cin >> a[i];
    }
    set<int>luu;
    for(int i=0;i<n;i++){
        luu.insert(a[i]);
    }
    cout << luu.size();
    return 0;
}

//Mảng tần số
#include <bits/stdc++.h>
using namespace std;
int ts[125];
int main(){
    int n,tuoi; cin >> n;
    for(int i=0;i<n;i++){     //tính tuổi
        cin >> tuoi;
        ts[tuoi]++;
    }
    int dem=0;
    for(int i=0;i<=120;i++){
        if(ts[i]>0) dem++;
    }
    cout << dem;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
char a[105],temp;
int main(){
    int n,max=0; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){                 //ky tu xuat hien nhieu nhat - sai test 8
        int dem=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                dem++;
                if(max<dem){
                    max=dem;
                    temp=a[i];
                }
            }
            else dem=1;
        }
    }
    cout << temp;
    return 0;
}


// http://laptrinhphothong.vn/Problem/Details/5887 - N0415B1 - Số lần xuất hiện 0.0
/// cách 1:
#include <bits/stdc++.h>
using namespace std;
int ts[1000006];
int main(){
    int a,temp;
    int max=0;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        ts[a]++;
    }
    for(int i=0;i<=1000;i++){
        if(max<ts[i]){
            max=ts[i];
        }
    }
    cout << max;
    return 0;
}


//đếm số lần xuất hiện nhiều nhất  Cách 2:
#include <bits/stdc++.h>
using namespace std;
int ts[1000006];
int main(){
    int a,temp;
    int max=0;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        ts[a]++;
        if(max<ts[a]){
            max=ts[a];
        }
    }
    cout << max;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int ts[1000004],a[1000004];
set<int>luu;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);                    //so lan xuat hien 1.0 - qua thoi gian
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        luu.insert(a[i]);                   //cach 1
        ts[a[i]]++;
    }
    for(auto i : luu){
        cout << i << " " << ts[i] << endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int ts[1000004],a[1000004];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,M=0; cin >> n;                                //cách chuẩn nhất hành tinh
    for(int i=0;i<n;i++){
        cin >> a[i];
        ts[a[i]]++;
        if(M<a[i]){
            M=a[i];
        }
    }
    for(int i=0;i<=M;i++){
        if(ts[i] > 0){
            cout << i << " " << ts[i] << '\n';
        }
    }
    return 0;
}



#include <iostream>
using namespace std;

const int MAX = 1e6;
int cnt[MAX],a[MAX];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < MAX; i++) cnt[i] = 0;             //cach 2
    for(int i = 0; i < n;i++){
        cnt[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(cnt[i] > 0){
            cout << i << " " << cnt[i] << endl;
        }
    }
}
#include <iostream>
#include <map>
using namespace std;
const int N = 1e6;
int a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    map<int, int> cnt;
    for(int i = 0; i < n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(auto it : cnt){
        cout << it.first << " " << it.second << '\n';
    }
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    map<char, int> luu;
    for(int i=0;i<n;i++){                   //N0417B - Ký tự xuất hiện nhiều nhất - http://laptrinhphothong.vn/Problem/Details/4606
        char s; cin >> s;
        luu[s]++;
    }
    char kq;
    int max=0;                                  //cach 1
    for(auto it : luu){
        if(it.second > max){
            max=it.second;
            kq=it.first;
        }
    }
    cout << kq << " " << max;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int ts[125];
int main()
{
    int n,m=0; cin >> n;
    char kq;char s;
    for(int i=1;i<=n;i++){
        cin >> s;
        ts[s]++;
    }
    for(int i=97;i<=122;i++){                           //cach 2 - mảng tần số
        if(m<ts[i]){
            m=ts[i];
            kq=char(i);
        }
    }
    cout << kq;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    int n; cin >> n;
    map<int, int> luu;
    for(int i=0;i<n;i++){
        cin >> a[i];
        luu[a[i]]++;                        // in ra số xuất hiện nhiều nhất và số lần xuất hiện của nó
    }
    int kq,max=0;
    for(auto it : luu){
        if(it.second > max){
            max=it.second;
            kq=it.first;
        }
    }
    cout << kq << " " << max;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int ts[1000006],a[1000006];
vector<int> luu ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){                           //N0439B - Số lần xuất hiện 2.0 - http://laptrinhphothong.vn/Problem/Details/5894
        cin >> a[i];
        luu.push_back(a[i]);
        ts[a[i]]++;
    }
    for(auto i : luu){
        cout << i << " " << ts[i] << '\n';
    }
}



#include <bits/stdc++.h>
using namespace std;
int a[2*1000005],ts[2*1000005];
int main(){
    map<int,int> map;
    int n; cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        map[a[i]]++;
    }
    for(auto i : map ){
        if(i.second%2 !=0 ) {                   //N0441B - Sắp xếp - http://laptrinhphothong.vn/Problem/Details/5902
            cout << i.first;
            return 0;
        }
    }
    return 0;
}


#include<iostream>
#include<math.h>
#define maxm 100
#define maxn 100
using namespace std;

void nhap(int a[maxm][maxn],int &m,int &n)
{
    cin >> n;
    m=n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
         }
}
int tinhxungquanh(int a[maxm][maxn],int m,int n)                    //N0508C - Tổng trên biên ma trận - http://laptrinhphothong.vn/Problem/Details/4617
{
    int s=0;
    for(int i=0;i<m;i++)
    {
        s=s+a[i][0]+a[i][n-1];
    }
    for(int j=1;j<n-1;j++)
    {
        s=s+a[0][j]+a[m-1][j];
    }
    return s;
}
int a[maxm][maxn];
int main()
{
    int m,n,k;
    nhap(a,m,n);
    cout<<tinhxungquanh(a,m,n)<<endl;
}



#include <iostream>

using namespace std;

int main()
{
    int a[101][101];
    int m,n,Max=0,s=0,cs;
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j=1;j<=m;j++)
    {
        Max=Max+a[1][j];
    }
    cs=1;
    for(int i=2;i<=n;i++){
        s = 0;
        for (int j = 1; j <= m; j++) {              //N0517B - Hàng có tổng bé nhất - http://laptrinhphothong.vn/Problem/Details/5758
            s += a[i][j];
        }
    if(Max>s)
    {
        Max=s;
        cs=i;
    }
    }

    cout << cs;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main()
{
	int n,m,Max=0,s;
	cin >> m >> n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	s=0;
    for(int i=0;i<m;i++)
	{
        for (int j = 0; j < n; j++)                     //N0501B - Tổng hàng - http://laptrinhphothong.vn/Problem/Details/5862
		{
            s += a[i][j];
        }
        cout <<"\t"<< s<<endl;
		s=0;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[1002][1002];
int main()
{
    vector<int>l;
    int n,m,dem=0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            l.push_back(a[i][j]);                   //N0545B - Ma trận thưa - http://laptrinhphothong.vn/Problem/Details/5913
        }
    }
    for(int i=0;i<l.size();i++){
        if(l[i]==0) dem++;
    }
    if(dem > n*m/2) cout << "YES";
    else cout << "NO";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int mat[105][105];
int main(){
   int sum = 0;
   int row,col;
   cin >> row;
   col=row;
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {                       //N0506A - Tổng trên đường chéo chính - http://laptrinhphothong.vn/Problem/Details/4615
         cin >> mat[i][j];
      }
   }
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
         if (i == j)
            sum = sum + mat[i][j];
      }
   }
   cout << sum;
   return 0;
}




#include <iostream>

using namespace std;
int WordCount(string str)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
int main()
{
    string s; getline(cin,s); cout << WordCount(s);     //N0607B - Đếm số từ - http://laptrinhphothong.vn/Problem/Details/4627
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main()
{
    int n,w,dem=0; cin >> n >> w;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]>w){
            dem++;
            cout << i << " " << a[i]-w << " " << '\n';          //N0407B - Cứu trợ - http://laptrinhphothong.vn/Problem/Details/5859
        }
    }
    if(dem==0) cout << 0;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[100005],f[100005];
int main()
{
    int n,kq=0,dem=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==1) dem++;
    }
    if(dem==0) cout << -1;
    f[0]=0;
    for(int i=1;i<=n;i++){                                  //N0433B - Dãy số 1 - http://laptrinhphothong.vn/Problem/Details/5775
        if(a[i]==1){
            f[i]=f[i-1]+1;
        }
        else {
            f[i]=0;
        }
        kq=max(kq,f[i]);
    }
    for(int i=1;i<=kq;i++){
        cout << 1 << " ";
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;
int a[100006],ts[100006];
vector<int> luu;
int main()
{
    int n,k,dem=0; cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        ts[a[i]]++;
    }
    for(int i=1;i<=1000;i++){
        if(ts[i]>=k){
            dem++;
            luu.push_back(i);
        }
    }
    if(dem>=k){
        sort(luu.begin(),luu.end());
        for(auto i : luu){
            cout << i << " ";
        }
    }
    if(dem==0) cout << -1;

    return 0;
}


#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
long long n;
int k,l;
int main()
{
    cin >> n >> k >> l;
    vector<int>a(n); vector<int>luu;                //H2_B - Chèn thêm phần tử vào mảng - http://laptrinhphothong.vn/Problem/Details/6041
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        luu.push_back(a[i]);
    }
    luu.insert(luu.begin()+k-1,l);
    for(int i=0;i<luu.size();i++)
    {
        cout << luu[i] << " ";
    }
    return 0;
}


#include <iostream>
#include <vector>
using namespace std ;
int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n);
    for(int i=0;i<n;i++){           //H1_A - Xóa phần tử trong mảng - http://laptrinhphothong.vn/Problem/Details/6039
        cin >> a[i];
    }
    a.erase(a.begin()+x-1);
    for(auto i : a)
        cout << i << " ";
    return 0;
}



#include <bits/stdc++.h>

using namespace std;
void XoaPhanTu(int a[], int n, int vt)
{
	for(int i=vt; i<=n; i++)
		a[i] = a[i+1];
	n--;
	for(int i=1;i<=n;i++)
    {
        cout << a[i]  << " ";
    }
}
int a[1000001];                     /H1_A - Xóa phần tử trong mảng - http://laptrinhphothong.vn/Problem/Details/6039
int main()
{
    int n,vt;
    cin >> n >> vt;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    XoaPhanTu(a,n,vt);
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
int a[1000006];
int main() {
    int n, vt, x;
    cin >> n >> vt >> x;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=n;i>=vt;i--) {        // H2_B - Chèn thêm phần tử vào mảng - http://laptrinhphothong.vn/Problem/Details/6041
        a[i+1]=a[i];
    }
    a[vt]=x;
    n++;
    for(int i=1;i<=n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}



#include <iostream>

using namespace std;
bool binarySearch(long long arr[], int n, long long x) {
  int r = n - 1;
  int l = 0;
  while (r >= l) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
      return true;
    if (arr[mid] > x)
      r = mid - 1;
    if (arr[mid] < x)                       //tim kiem nhi phan 1 - SB01A - Tìm kiếm nhị phân 1 - http://laptrinhphothong.vn/Problem/Details/5927
      l = mid + 1;                          //tham khảo : https://nguyenvanhieu.vn/thuat-toan-tim-kiem-nhi-phan/
  }
  return false;
}
long long a[100005], x;
int main()
{
    long long n, x; cin >> n >> x;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    if(binarySearch(a,n,x)==true) cout << "Y";
    else cout << "N";
    return 0;
}



#include <iostream>

using namespace std;
bool binarySearch(long long arr[], int left, int right, long long x) {
    int middle;
    while(left <= right) {
        middle = (left + right) / 2;
        if (arr[middle] == x)
            return true;
        if (x > arr[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return false;
}
long long a[100005], x;
int main()
{
    long long n, x; cin >> n >> x;                      //SB01A - Tìm kiếm nhị phân 1 - http://laptrinhphothong.vn/Problem/Details/5927
    for(int i=0;i<n;i++) {                              // tham khao :  https://freetuts.net/thuat-toan-tim-kiem-nhi-phan-2634.html
        cin >> a[i];
    }
    if(binarySearch(a,0,n-1,x)==true) cout << "Y";
    else cout << "N";
    return 0;
}




#include <iostream>
using namespace std;
int dem (int a[], int x, int n) {
    int dem=0;
    for(int i=1;i<=n;i++) {
        if(a[i]==x) {
            dem++;
        }
    }
    return dem;
}
int a[1005],x;											//PK0016C1 - Xổ số 1 - http://laptrinhphothong.vn/Problem/Details/5899
int main()
{
    int n; cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    int q; cin >> q;
    for(int i=1;i<=q;i++) {
        cin >> x;
        cout << dem(a,x,n) << '\n';
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
long long k,x,n,a;
map<long long,long long> mp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i=1;i<=n;i++) {               //PK0016C2 - Xổ số 2 - http://laptrinhphothong.vn/Problem/Details/5900
        cin >> a;
        mp[a]++;
    }
    cin >> k;
    for(long long i=1;i<=k;i++) {
        cin >> x;
        cout << mp[x] << '\n';
    }
    return 0;
}






#include <bits/stdc++.h>
using namespace std;
int a,ts[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,dem=0; cin >> n;
    for(int i=1;i<=n;i++){                      N0430C - Đếm cặp phần tử trùng - http://laptrinhphothong.vn/Problem/Details/5827
        cin >> a;
        ts[a]++;
    }
    for(int i=1;i<=1000;i++) {
        if(ts[i]>1) {
            dem=dem+((ts[i]*(ts[i]-1))/2);  //công thức suy ra
        }
    }
    cout << dem;
    return 0;
}





#include <bits/stdc++.h>
using namespace std;
long long c1,c2;
long long uoc(long long a,long long b)
{
  long long kq=0;
  for(long long i=1;i*i<=a;i++)
  {
    if(a%i==0)
    {
      if(b%(i*3)==0) kq=kq+i;
      if(a/i!=i)
      {
        if(b%(3*(a/i))==0) kq=kq+a/i;             //HSG12NAA1 - Tính tổng các ước - http://laptrinhphothong.vn/Problem/Details/6071
      }
    }
  }
  return kq;
}
int main()
{
 cin >> c1 >> c2;
 cout << uoc(c1,c2);
 return 0;

}



#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s,s1;
    int f;
    getline(cin,s);                     //N0623A - Xâu con 1 - http://laptrinhphothong.vn/Problem/Details/5751
    getline(cin,s1);
    f = s.find(s1);
    if (f>=0) cout << f;
    else cout << "NO";
}


#include <iostream>
#include <algorithm>
using namespace std;
int a[200005];
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];               //N0440B - Khoảng cách lớn nhất - http://laptrinhphothong.vn/Problem/Details/5901
    sort(a,a+n);
    cout << max(abs(a[0]+a[1]),abs(a[n-1]+a[n]));
    return 0;
}


#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n,a,dem=0,dem2=0;
map<int,int> m;
int main()
{

    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a;
        m[a]++;
    }
    for(auto i : m) {
        if(i.second==i.first){          //N0421B - Bộ tộc - http://laptrinhphothong.vn/Problem/Details/5885
            dem++;
        }
        else if(i.second>i.first){
            dem2+=i.second/i.first;
        }
    }
    cout << dem+dem2;
    return 0;
}


#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n,m,a[105],x,y;
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=1;i<=m;i++) {             //PK0001B - SWAPAB - http://laptrinhphothong.vn/Problem/Details/5836
        cin >> x >> y;
        swap(a[x],a[y]);
    }
    for(int i=1;i<=n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}



#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n,m,a[105],x,y;
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=1;i<=m;i++) {         //PK0002B - Biến đổi mảng - http://laptrinhphothong.vn/Problem/Details/5837
        cin >> x >> y;
        a[x]+=y;
    }
    for(int i=1;i<=n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}




#include <iostream>

using namespace std;

string cong(string num1, string num2) {
    string kq = "";
    int so = 0;
    while (num1.size() < num2.size()) num1 = '0' + num1;
    while (num1.size() > num2.size()) num2 = '0' + num2;
    int n = num1.size();
    for (int i = n - 1; i >= 0; i--) {
        so = (num1[i] - '0') + (num2[i] - '0') + so;
        kq = char((so % 10) + '0') + kq;
        so /= 10;
    }
    if (so > 0) {
        kq = '1' + kq;
    }
    return kq;
}

int main() {
   string f[1001];
    f[1] = "1", f[2] = "1";
    for (int i = 3; i <= 1000; i++) {               //PK0018CC - Số Fibonacci - http://laptrinhphothong.vn/Problem/Details/6066
        f[i] = cong(f[i - 1], f[i - 2]);
    }
    int n;
    while (cin >> n) {
        cout << f[n] << endl;
    }
    return 0;
}





#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;                  //n0801b - Không chia hết - http://laptrinhphothong.vn/Problem/Details/6061
    cout << n - n / x;
}




#include <bits/stdc++.h>

using namespace std;
int dem(string s){
    int dem=1,kq=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]==s[i+1]) dem++;
        else dem=1;
        kq=max(kq,dem);
    }
    return kq;
}
string s;
int main()
{
    int n,kq=0;                         //HSG12NAA2 - Thành phố xanh đẹp - http://laptrinhphothong.vn/Problem/Details/6072
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> s;
        kq=max(kq,dem(s));
    }
    cout << kq;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

long long f[61];

bool prime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    f[1] = f[2] = 1;
    for (int i = 3; i <= 60; i++) {             //N1005B - Số nguyên tố fibonacci - http://laptrinhphothong.vn/Problem/Details/5626
        f[i] = f[i - 1] + f[i - 2];             // cach 1 - accecpted
    }
    long long n, pos = 60;
    cin >> n;
    for (int i = 60; i >= 1; i--) {
        if (f[i] <= n) {
            pos = i;
            break;
        }
    }
    for (int i = pos; i >= 1; i--) {
        if (prime(f[i])) {
            cout << f[i];
            return 0;
        }
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
bool fb(long long n)
{
    long long f0=1;
    int f1=1;
    int fn=0;
    if(n<=1) return false;
    while(fn<=n)
    {
        fn=f0+f1;
        f0=f1;
        f1=fn;
        if(fn==n) return true;
    }
    return false;
}
bool snt(int x)
{
    if (x<2) return false;
    for (int i=2;i<=sqrt(x);i++) {
        if (x%i==0) return false;                           //code khắm
    }                                                       //N1005B - Số nguyên tố fibonacci - http://laptrinhphothong.vn/Problem/Details/5626
    return true;                                            //cach 2
}
int fibosnt(int n)
{
    int max=0;
    for (int i=n;i>=0;i--) {
        if (fb(i)==true && snt(i)==true) {
            max=i;
            break;
        }
    }
    return max;
}
int n;
int main()
{
    cin >> n;
    cout << fibosnt(n);
return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    string s1,s2;
    cin>>s2>>s1;
    for(int i=0;i<s2.size();i++){
        string b=s2.substr(i,s1.size());                //N0623B - Xâu con 2 - http://laptrinhphothong.vn/Problem/Details/5752
        if(s1==b){
            a++;
        }
    }
    cout << a;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

vector<int> computeLPS(string s1) {
    vector<int> lps(s1.length());
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < s1.length()) {
        if (s1[i] == s1[len]) {
            len = len + 1;
            lps[i] = len;
            i = i + 1;
        }
        else {
            if (len == 0) {
                lps[i] = 0;
                i = i + 1;
            }
            else {
                len = lps[len - 1];
            }
        }
    }

    return lps;
}

void modifyString(string s, string s1, string s2) {
    vector<int> lps = computeLPS(s1);
    int i = 0;
    int j = 0;
    vector<int> found;
    while (i < s.length()) {
        if (s[i] == s1[j]) {
            i = i + 1;
            j = j + 1;
        }
        if (j == s1.length()) {
            found.push_back(i - j);
            j = lps[j - 1];
        }
        else if (i < s.length() && s1[j] != s[i]) {                                 //N0618C - Thay thế xâu - http://laptrinhphothong.vn/Problem/Details/5743
            if (j == 0) {                                                           //code khắm
                i = i + 1;
            }
            else {
                j = lps[j - 1];
            }
        }
    }
    string ans = "";
    int prev = 0;
    for (int k = 0; k < found.size(); k++) {
        if (found[k] < prev) {
            continue;
        }
        ans.append(s.substr(prev, found[k] - prev));
        ans.append(s2);
        prev = found[k] + s1.size();
    }
    ans.append(s.substr(prev, s.length() - prev));
    cout << ans << endl;
}

int main()
{
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);
    getline(cin, s2);
    modifyString(s, s1, s2);
    return 0;
}




#include <bits/stdc++.h>
#include <regex>

using namespace std;

int main()
{
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);                           ////N0618C - Thay thế xâu - http://laptrinhphothong.vn/Problem/Details/5743
    getline(cin, s2);                           //code accecpted
    s = regex_replace(s, regex(s1), s2);
    cout << s;
    return 0;
}




#include <iostream>
using namespace std;
long long tongn(long long n){
    long long tong=0;
    for(long long j=2;j<=2*n;j+=2) {
           tong=tong+(j*j);
       }
      return tong;                      //N0346CC - Tổng chẵn bình phương 2 - http://laptrinhphothong.vn/Problem/Details/5937
}
int main() {
    long long n,t,tong=0; cin >> n;
    for(long long i=0;i<n;i++) {
       cin >> t;
       cout << tongn(t) << '\n';
    }
}



#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n==0 || n==1) return false;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int a[505],n,dem=0;                     //HSG12NAB3 - Chênh lệch nguyên tố - http://laptrinhphothong.vn/Problem/Details/6075
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(snt(abs(a[i]-a[j]))==true) {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
vector<string> luu;
string s; int n,kq=0;
int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> s;
            luu.push_back(s);
        }
    }
    int dem=1;
    sort(luu.begin(),luu.end());                N0512C - Bảng ký tự - http://laptrinhphothong.vn/Problem/Details/5655
    for(int i=0;i<luu.size();i++) {
        if(luu[i]==luu[i+1]) {
            dem++;
        }
        else {
            dem=1;
        }
        kq=max(kq,dem);
    }
    cout << kq;
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
map<char,int>m;
vector<char> luu;
int dem=0;
string pushback(string s) {
    string temp;
    for(int i=0;i<s.size();i++) {
        temp.push_back(s[i]);
    }
    return temp;
}
string xoatrung(string s) {
    set<char>luu;string temp;
    for(int i=0;i<s.size();i++) {				
        luu.insert(s[i]);
    }
    for(auto i : luu)  temp.push_back(i);
    return temp;
}
int main() {                                //N0614C - Chữ số chung - http://laptrinhphothong.vn/Problem/Details/5702
    string s,ss,S,s1,s2;
    cin >> s1 >> s2;
    string S1=xoatrung(s1), S2=xoatrung(s2);
    s=pushback(S1); ss=pushback(S2);
    S=s+ss;
    for(int i=0;i<S.size();i++){
        m[S[i]]++;
    }
    for(auto i : m) {
        if(i.second==2) {
            dem++;
        }
    }
    cout << dem;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
map<char,int>m;
vector<char> luu ;
string pushback(string s) {
    string temp;
    for(int i=0;i<s.size();i++) {
        temp.push_back(s[i]);
    }
    return temp;
}
string xoatrung(string s) {
    set<char>luu;string temp;
    for(int i=0;i<s.size();i++) {
        luu.insert(s[i]);
    }
    for(auto i : luu)  temp.push_back(i);
    return temp;
}
int main() {
    string s,ss,S,s1,s2;
    cin >> s1 >> s2;
    string S1=xoatrung(s1), S2=xoatrung(s2);                // là bài chữ số chung như trên. Nhung lần này thì cout ra luôn kí tự trùng lặp
    s=pushback(S1); ss=pushback(S2);
    S=s+ss;
    for(int i=0;i<S.size();i++){
        m[S[i]]++;
    }
    for(auto i : m) {
        if(i.second==2) {
            luu.push_back(i.first);
        }
    }
    for(auto i : luu) cout << i << " ";
    return 0;
}



#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
int n,sum,x,mx=INT_MIN;
int main() 
{
    ios_base::sync_with_stdio(0);			//N0448C - Tổng dãy lớn nhất - http://laptrinhphothong.vn/Problem/Details/5943
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>x;
      sum=max(x,x+sum);
      mx=max(mx,sum);
    }
    cout<<mx;
}



#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
ll mu(ll a, ll n)
{
    if(n==0) return 1;
    ll  tam = mu(a,n/2);
    tam = (tam*tam)%mod;
    if(n%2==1) tam  = (tam*a)%mod;				// N1101A - Số tập con - http://laptrinhphothong.vn/Problem/Details/4664
    return tam;
}
int main()
{
    long long a,n;
     cin >> n;
     cout << mu(2,n);
}



#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n;
    cin >> n;
    if(n%2==0) cout << (n*(n+1)/2)-(n*(n/2+1)/2);				//PK0008B - Tổng tất cả các số lẻ - http://laptrinhphothong.vn/Problem/Details/5971
    else {
         n=n-1;
         cout << (n*(n+1)/2)-(n*(n/2+1)/2);
    }
}


#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool sprime(int n) {
    while (n > 0) {
        if (prime(n) == false) {						// N1009C - Số siêu nguyên tố - http://laptrinhphothong.vn/Problem/Details/4659
            return false;
        }
        n /= 10;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    if (sprime(n))  cout << "YES";
    else cout << "NO";   
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {			//N0611C - Mã hóa 2 - http://laptrinhphothong.vn/Problem/Details/4631
        s[i] -= n;
        if (s[i] < 'a') s[i] = s[i] + 'z' - 'a' + 1;
    }
    cout << s;
    return 0;
}


#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, f[1000005], dem=0;
int main() 
{
    f[1]=1;
    f[2]=1;
    for(ll i=3; i<=50; i++)
        f[i]=f[i-1]+f[i-2];				// cách 1 - N0427D - Biểu diễn Fibonacci - http://laptrinhphothong.vn/Problem/Details/5691
    cin>>n;
    for(ll i=50; i>=1; i--)
    {
        if(n>=f[i])
        {
            n= n-f[i];
            dem++;
        }
    }
    cout<<dem;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,dem=0;
	cin>>n;
	long long a[100];
	a[0]=1;
	a[1]=1;
	for (i=2;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];				// cách 2 - N0427D - Biểu diễn Fibonacci - http://laptrinhphothong.vn/Problem/Details/5691
		if (a[i]>n){
			dem=1;
			n=n-a[i-1];
			break;
		}
	}
	while (n>0)
	{
		for (i;i>=0;i--)
		{
			if (a[i]<=n)
			{
			dem+=1;
			n=n-a[i];
			}
		}
	}
	cout<<dem;
}


#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
#define nmax 1000009
   	

int main()
{
	memset(a,0,sizeof(a));
	for(ll i=1;i<=nmax;i++)
	{
		for(ll j=i;j<=nmax;j+=i)
		if(i!=j)a[j]+=i;
	}
	ll l,r,res=0;			//N1018D - Số bạn bè - http://laptrinhphothong.vn/Problem/Details/5790
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		if(a[i]<=r&&a[i]>=l&&a[a[i]]==i)//cout<<i<<" "<<a[a[i]];
		res++;a[i]=0;
	}
	//cout<<res;
	cout<<res;
}


// sau khi làm bai trên tôi đã lên trang 1 ltpt vào ngày 1/9/2022
// kết quả cố gắng từ đầu năm lớp 9 34->267 bài :V

#include <iostream>

using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    long long pos = 0, neg = 0;
    for (int i = 1; i <= n; i++) {		//N0436B - Dương và âm - http://laptrinhphothong.vn/Problem/Details/5874
        cin >> a;
        if (a > 0) pos++;
        if (a < 0) neg++;
    }
    cout << pos * neg;
    return 0;
}


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int res, a, n, l, r;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 4) res++; 
        else v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());				//PK0031C - TAXI - http://laptrinhphothong.vn/Problem/Details/5968
    r = v.size() - 1;
    for (l = 0; l <= r; ++l) {
        res++;
        int tmp = v[l];
        while (tmp + v[r] <= 4 && l <= r) {
            --r;
            tmp += v[r];
        }
    }
    cout << res;
    return 0;
}


#include <iostream>
using namespace std;


int n, Q, b[1000005];

int main() {
    cin >> n;
    for (int i = 1; i <=n; ++i) {
        int a; cin >> a;
        b[i] = b[i - 1] + a;				//IDP1104A - IDP1104A - http://laptrinhphothong.vn/Problem/Details/5632
    }
    
    cin >> Q;
    while (Q--) {
        int a; cin >> a;
        cout << b[a] << '\n';
    }
    return 0;
}


#include<bits/stdc++.h>
#define p 1e6
using namespace std;
bool isPrime(int n)
{
 if(n<2) return false;
 if(n<4) return true;
 if(n%2==0|n%3==0) return false;
 for(int i=5;i*i<=n;i+=6)
  if(n%i==0|n%(i+2)==0)
   return false;
 return true;
}
int main()
{
 int t,d=0;
 cin>>t;
 vector<int> a;
 for(int i=5;d<10000;i+=2)
 {
  if(isPrime(i) & isPrime(i+6))			//PK0030C - Số nguyên tố tri kỉ - http://laptrinhphothong.vn/Problem/Details/5957
  {
   a.push_back(i);
   d++;   
  }
 }
 for(;t>0;t--)
 {
  int n;
  cin>>n;
  cout<<a[n-1]<<" "<<a[n-1]+6<<"\n";
 }
}



#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	if (n < 3) {
		cout << -1;
		return 0;
	}
	for (ll i = 3;i <= n;i++)			//PK0027C - Dãy số đơn giản	- http://laptrinhphothong.vn/Problem/Details/5949
	{
		ll t = (i+1)*i/2;
		ll m = sqrt(t);
		if (m*m+m == t) {
			cout << i << " ";
		}
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main (){
    long int n, a, l = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++){			//PK0029C - Số cá tính - http://laptrinhphothong.vn/Problem/Details/5951
        cin >> a;
        if (a % 2 == 0) {
            c++;
            if (l > 1 ) {
                cout << a;
                break;
            }
        } else {
            l++;
            if (c > 1){ 
                cout << a;
                break;
            }
        }
        
    }
    return 0;
}

*/
