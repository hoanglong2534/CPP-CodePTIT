#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
struct NhanVien{
	string  ten, gt, ns,  dc, thue, hd;
	string d , m, y;
	int mnv;
};

void nhap(NhanVien &ds){
	cin.ignore();
	getline(cin, ds.ten);
	cin >> ds.gt >> ds.ns;
	cin.ignore();
	stringstream ss(ds.ns);
	getline(ss, ds.m, '/');
	getline(ss, ds.d, '/');
	getline(ss, ds.y, '/');
	getline(cin , ds.dc);
	cin >> ds.thue >> ds.hd;
	ds.mnv = cnt++;
}

bool cmp(NhanVien a, NhanVien b){
	if(a.y < b.y) return 1;
	if(a.y > b.y) return 0;
	if(a.m < b.m) return 1;
	if(a.m > b.m) return 0;
	if(a.d < b.d) return 1;
	if(a.d > b.d) return 0;
}

void sapxep(NhanVien ds[], int N){
	sort(ds, ds + N, cmp);
}

string mnv(	int i){
	string r = to_string(i);
	while(r.size() < 5){
		r = '0' + r;
	}
	return r;
}

void inds(NhanVien ds[], int N){
	for(int i = 0; i < N; i++){
		cout << mnv(ds[i].mnv) << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].thue << " " << ds[i].hd << endl;
	}
	
}

int main(){
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
