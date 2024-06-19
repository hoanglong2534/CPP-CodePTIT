#include<bits/stdc++.h>
using namespace std;

struct sinhvien{
	string msv, ten, lop;
	float diem1, diem2, diem3;
};

void nhap(sinhvien ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].msv); 
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;	
	}
}

bool cmp(sinhvien a, sinhvien b){
	return a.ten < b.ten;
}

void sapxep(sinhvien ds[], int n){
	sort(ds, ds+n, cmp);
}

void in(sinhvien ds[], int n){
	for(int i = 0; i < n; i++){
		cout << i+1 << " " << ds[i].msv << " " <<  ds[i].ten << " " << ds[i].lop << " " << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
	}
}


int main(){
	int n;
	cin >> n; 
	struct sinhvien ds[100];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
