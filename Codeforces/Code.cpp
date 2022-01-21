/*#include <bits/stdc++.h>


using namespace std;
int main()
{
    string s,ss;
    cin >> s >> ss;
    reverse(ss.begin(),ss.end());           //  A. Translation - https://codeforces.com/contest/41/problem/A
    if(s==ss) cout << "YES";
    else cout << "NO";
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a,b,i,k=1;
    cin >> a >> b;                          // A. I'm bored with life - https://codeforces.com/contest/822/problem/A
    for(i=2;i<=min(a,b);i++)k*=i;
    cout<<k;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,z,tx=0,ty=0,tz=0;; cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y >> z;                 // A. Young Physicist - https://codeforces.com/contest/69/problem/A
        tx+=x; ty+=y; tz+=z;
        if(tx==0 && ty==0 && tz==0){
            cout << "YES";
            return 0;
        } 
    }
    cout << "NO";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        string s; cin >> s;                 // A. Way Too Long Words - https://codeforces.com/contest/71/problem/A
        if(s.size()>10) {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl; 
        }
        else cout << s << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin >> n;                  // A. Again Twenty Five! - https://codeforces.com/contest/630/problem/A
    if(n==1) cout << 0 << 5;
    else cout << 25;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    set<char> luu;
    for(int i=0;i<s.size();i++){            // A. Boy or Girl - https://codeforces.com/contest/236/problem/A
        luu.insert(s[i]);
    }
    if(luu.size()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
long long f[100];
vector<long long>v;
int main()
{
    long long n,tong=0;
    cin >> n;
    f[1]=f[2]=1;
    v.push_back(f[1]);v.push_back(f[2]);
    for(long long i=3;i<=n;i++) {
        f[i]=f[i-1]+f[i-2];
        v.push_back(f[i]);
    }
    for(auto i : v) {
        tong+=i;
    }
    cout << tong;
    return 0;
}