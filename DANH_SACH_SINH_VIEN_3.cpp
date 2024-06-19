#include<bits/stdc++.h>
using namespace std;
int currID = 1;
struct SinhVien{
	string  ten, ns, lop;
	int msv;
	float gpa;
};
string standardNAME(string name) {
	stringstream ss(name) ;
	string tmp , ans;
	while(ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for(int i = 1 ; i < tmp.size() ; i++) {
			tmp[i] = tolower(tmp[i]);
		}
		ans += tmp + " ";
	}
	return ans ;
} 
void nhap(SinhVien ds[], int N){
	for(int i=0;i<N;i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		cin>>ds[i].lop>>ds[i].ns>>ds[i].gpa;
		
		if(ds[i].ns[1] == '/'){
			ds[i].ns = "0" + ds[i].ns;
		}
		if(ds[i].ns[4]=='/'){
			ds[i].ns.insert(3,"0");
		}
		ds[i].msv = currID++;
	}
	
}
string msv(int i){
	string r = to_string(i);
	while(r.size()<3){
		r = '0'+ r;
	}
	return "B20DCCN" + r;
}
bool cmp(SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int N){
	sort(ds, ds + N , cmp);
}
void in(SinhVien ds[] , int N) {
	for(int i = 0 ; i < N ; i++) {
		cout << msv(ds[i].msv) << " " << standardNAME(ds[i].ten) <<" "<< ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
