#include<bits/stdc++.h>
using namespace std;

int cnt = 1;

struct sinhvien{
	string msv, ten, lop, mail, dn;
	int stt;
	
};

void nhap(sinhvien ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		cin >> ds[i].msv;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].mail >> ds[i].dn;
		ds[i].stt = cnt++;	
	
	}
}

bool cmp(sinhvien a, sinhvien b){
	return a.ten < b.ten;
}

void sapxep(sinhvien ds[], int n){
	sort(ds, ds + n, cmp);
}

int main(){
	int n;
	cin >> n;
	sinhvien ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	vector<sinhvien> vs;
	
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		for(int i = 0; i < n; i++){
			if(ds[i].dn == s){
				cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].mail << " " << ds[i].dn << endl;
			}
		}
	}
	
	return 0;
}
