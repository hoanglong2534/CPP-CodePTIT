#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string msv, ten, lop, ns;
		float gpa;
	public:
		SinhVien(){
			this -> msv = "B20DCCN001";
			this -> ten = "";
			this -> lop = "";
			this -> ns = "";
			this -> gpa = 0;
		}
		
		void nhap(){
			getline(cin, ten);
			getline(cin, lop);
			getline(cin, ns);
			cin >> gpa;
			
			if(ns[1] == '/'){
				ns = "0" + ns;
			}
			if(ns[4] == '/'){
				ns.insert(3,"0");
			}
		}
		void xuat(){
			cout << msv << ' ' << ' ' << ten << ' ' << lop << ' ' << ns << ' ' << fixed << setprecision(2) << gpa;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
