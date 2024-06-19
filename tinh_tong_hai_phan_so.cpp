#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long t,m; 
};

void nhap(PhanSo &p){
	cin>>p.t>>p.m;  
}


long long gcd(long long a, long long b){
	while(b!=0){
	long long r = a%b;
	 a = b;
	 b = r;
	}
	return a;
}

long long lcm(long long a, long long b){
	return a*b/gcd(a,b);
}

void rutgon(PhanSo &p){
	long long l  = gcd(p.t,p.m);
	p.t/= l;
	p.m/= l;
}

PhanSo tong(PhanSo p, PhanSo q){
	long long mc = lcm(p.m, q.m);
	p.t = mc/p.m * p.t;
	q.t = mc/q.m * q.t;
	PhanSo t;
	t.t = p.t + q.t;
	t.m = mc;
	rutgon(t);
	return t;
}

void in(PhanSo p){
	cout<<p.t<<"/"<<p.m;
}

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
