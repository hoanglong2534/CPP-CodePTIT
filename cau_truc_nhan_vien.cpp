#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv, ten, gt, ns, dc, thue, hd;	
};

void nhap(NhanVien &a){
	a.mnv="00001";
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.thue>>a.hd;
}

void in(NhanVien a){
	cout<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.thue<<" "<<a.hd;
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
