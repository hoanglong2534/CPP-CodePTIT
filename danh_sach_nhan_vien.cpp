#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv,ten,gt,ns,dc,thue,hd;
};

string mnv(int i){
	string r = to_string(i);
	while(r.size()<5){
		r='0'+r;
	}
	return r;
}
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.ten);
	cin>>a.gt>>a.ns;
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.thue>>a.hd;
}

void inds(NhanVien ds[], int N){
	for(int i=0;i<N;i++){
		cout<<mnv(i+1);
		cout<<ds[i].mnv<<" "<<ds[i].ten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].thue<<" "<<ds[i].hd<<endl;
	}
}
	
int main(){
 	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
