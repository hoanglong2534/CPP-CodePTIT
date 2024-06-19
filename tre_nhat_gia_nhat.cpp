#include<bits/stdc++.h>
using namespace std;

struct nguoi{
	string ten, ns, d, m, y;
};

void nhap(nguoi ds[], int n){
	for(int i = 0; i < n; i++){
		cin >> ds[i].ten >> ds[i].ns;
		stringstream ss(ds[i].ns);
		getline(ss, ds[i].d, '/');
		getline(ss, ds[i].m, '/');
		getline(ss, ds[i].y, '/');	
	}
}

bool cmp(nguoi &a, nguoi &b){
	if(a.y > b.y) return 1;
    if(a.y < b.y) return 0;
    if(a.m > b.m) return 1;
    if(a.m < b.m) return 0;
    if(a.d > b.d) return 1;
    return 0;
}

void sapxep(nguoi ds[], int n){
	sort(ds, ds + n, cmp);
}

void in(nguoi ds[], int n){
		cout << ds[0].ten << endl << ds[n-1].ten;
		
}

int main(){
	int n;
	cin >> n;
	nguoi ds[n];
	nhap(ds, n);
	sapxep(ds, n);		
	in(ds,n);	

	
	return 0;
}
