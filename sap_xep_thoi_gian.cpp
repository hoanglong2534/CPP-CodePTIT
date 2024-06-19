#include<bits/stdc++.h>
using namespace std;

struct thoigian{
	int h, p, s;
};

void nhap(thoigian ds[], int n){
	for(int i = 0; i < n; i++){
		cin >> ds[i].h >> ds[i].p >> ds[i].s;
	}
}

bool cmp(thoigian a, thoigian b){
	if(a.h < b.h) return 1;
	if(a.h > b.h) return 0;
	if(a.p < b.p) return 1;
	if(a.p > b.p) return 0;
	if(a.s < b.s) return 1;
	if(a.s > b.s) return 0;
}

void sapxep(thoigian ds[], int n){
	sort(ds, ds + n, cmp);
}

void in(thoigian ds[], int n){
	for(int i = 0; i < n; i++){
		cout << ds[i].h << " " << ds[i].p << " " << ds[i].s << endl;
	}
}

int main(){
	int n;
	cin >> n;
	thoigian ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
