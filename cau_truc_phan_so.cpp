#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu,mau;
};

void nhap(PhanSo &p){
	cin>>p.tu>>p.mau;
}

long long ucln(long long a, long long b){
	while (b!=0){
		long long r = a%b;
		a = b;
		b = r;
	} 
	return a;
}

void rutgon(PhanSo &p){
	long long x = ucln(p.tu, p.mau);
	p.tu /= x;
	p.mau /= x;
}

void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau;
}

int main(){
	struct PhanSo p;
	nhap (p);
	rutgon(p);
	in(p);
	return 0;
}
