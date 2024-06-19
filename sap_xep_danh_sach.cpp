#include<bits/stdc++.h>
using namespace std;

int curr = 1;

struct chill{
	int ma;
	string ten, nhom;
	double mua, ban;
};

void nhap(chill ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhom);
		cin >> ds[i].mua >> ds[i].ban;
		ds[i].ma = curr++;
	}
}

bool cmp(chill a, chill b){
	return (a.ban - a.mua) > (b.ban - b.mua);
}

void sapxep(chill ds[], int n){
	sort(ds, ds + n, cmp);
}

void in(chill ds[], int n){
	for(int i = 0; i < n; i++){
	cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].nhom << " " << fixed << setprecision(2) << ds[i].ban - ds[i].mua << endl;
	}
}

int main(){
	int n; 
	cin >> n;
	chill ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	
}
