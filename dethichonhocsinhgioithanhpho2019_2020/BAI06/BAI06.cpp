

#include <bits/stdc++.h>

using namespace std;

void xu_li(string str) {
    char* temp=new char[str.length()+1];
    strcpy(temp,str.c_str());
    char* p1=strtok(temp," ");
    while(p1!=NULL) {
        p1[0]=toupper(p1[0]);
        cout << p1 << " ";
        p1=strtok(NULL," ");
    }
}
int main()
{
    freopen("Bai06.INP","r",stdin);
    freopen("Bai06.OUT","w",stdout);
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++) {
        if (s[i] >= 'A' && s[i]<='Z')
            s[i]+=32;
    }
    xu_li(s);
    return 0;
}
