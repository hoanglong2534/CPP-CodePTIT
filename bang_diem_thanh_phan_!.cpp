#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv, ten, lop;
	float diem1, diem2, diem3;
};

void nhap(SinhVien &ds){
	cin>>ds.msv;
	cin.ignore();
	getline(cin, ds.ten);
	cin>>ds.lop>>ds.diem1>>ds.diem2>>ds.diem3;	
}

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n){
	sort(ds,ds+n,cmp);
}

void in_ds(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].diem1<<" "<<ds[i].diem2<<" "<<ds[i].diem3<<endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
