#include <bits/stdc++.h>

using namespace std;
int a[10000],f[10000];
int main()
{
    vector<int>chiso;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int result = 1;
    for (int i=1; i<=n; i++) {
        f[i] = 0;
        for (int j=0; j<i; j++)
            if (a[j] < a[i]) {
                f[i] = f[j]+1;
            }
            else
                f[i]=1;
    result = max(result, f[i]);
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i=1;i<=n;i++){
        cout << f[i] << " ";
    }
    cout << endl;
    cout << result << endl;
    return 0;
}
