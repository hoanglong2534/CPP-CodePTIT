#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,ten,lop,ns;
	float gpa;
};

string msv(int i){
	string r = to_string(i);
	while(r.size()<3){
		r = '0'+r;
	}
	return "B20DCCN"+r;
}
void nhap(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin,ds[i].ten);
		cin>>ds[i].lop>>ds[i].ns>>ds[i].gpa;
		
		if(ds[i].ns[1]=='/'){
			ds[i].ns = "0"+ds[i].ns;
			}
			
		if(ds[i].ns[4]=='/'){
			ds[i].ns.insert(3,"0");
		}
			
	}
	
}

void in(SinhVien ds[], int N){
	for(int i =0;i<N;i++){
		string s = msv(i+1); 
		cout<<s<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}

int main(){
	struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
