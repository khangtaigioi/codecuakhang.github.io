/*
#include <bits/stdc++.h>

using namespace std;
int TimPhanTu(int a[], int n, int x)
{
	for(int i=0; i<n; i++)
		if(a[i] == x)
			return i; //Tìm thấy x tại vị trí thứ i
	return -1; //Không tìm thấy x trong mảng
}

void XoaPhanTu(int a[], int &n, int x)
{
	int vt=TimPhanTu(a, n, x); //Tìm vị trí x trong mảng
	if(vt==-1)
		printf("\nKhong tim thay phan tu %d muon xoa.", x);     //xoa phan tu trong mang viet bang ham
	else
	{
		for(int i=vt; i<=n-2; i++)
			a[i] = a[i+1]; //Dịch các phần tử sang trái 1 vị trí
		n--; //Giảm số phần tử bớt 1
	}
}
int a[1000001];
int main()
{
    int n,vt;
    cin >> n >> vt;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {

        cout << XoaPhanTu(a,n,vt);
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
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a.erase(a.begin()+x-1);  // xóa phần từ thứ x trong mảng
    for(auto i : a)
        cout << i << " ";
    return 0;
}

//Một cơ sở sản suất đồ thủ công đã nhận được một đơn hàng yêu cầu gia công N sản phẩm. Với số lượng hàng lớn như vậy, cơ sở đã huy động toàn bộ nhân công bắt tay vào làm ngay. Tuy nhiên đây lại là sản phẩm mới nên ngày đầu cơ sở chỉ gia công được K sản phẩm. Sang ngày thứ hai, các công nhân đã thành thạo hơn nên số sản phẩm làm ra gấp đôi ngày thứ nhất. Và cứ như vậy, năng suất của ngày hôm sau lại cao gấp đôi ngày hôm trước. Cơ sở đó muốn biết cần bao nhiêu ngày để hoàn thành hết N sản phẩm ?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=1,tong=0;
    cin >> n;
    while(i<=n){
        if(n%i==0)
            tong+=i;        //tổng ước
        i++;
    }
    cout << tong;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sanpham,nangsuat1ngay,ngay=1,tong=0;
    cin >> sanpham >> nangsuat1ngay;
    if(sanpham<nangsuat1ngay) cout << 1;
    for(int i=nangsuat1ngay;i<=sanpham;i++){
        if(tong>=sanpham) break;
        tong+=nangsuat1ngay*2;
        ngay++;
    }
    cout << ngay;
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
int a[1000003];
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    cout << a[n-1]-a[0];
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sanpham,nangsuat1ngay,ngay=1;
    cin >> sanpham >> nangsuat1ngay;
    while(sanpham >= nangsuat1ngay){
        ngay++;
        nangsuat1ngay*=2;
    }
    cout << ngay;
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int coundiv(long long n) {
    int kq = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                kq++;
            } else {
                kq += 2;            //đếm ước
            }
        }
    }
    return kq;
}
*/

















































































