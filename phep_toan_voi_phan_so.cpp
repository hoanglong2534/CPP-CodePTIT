#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu,mau; 
}; 

long long gcd(long long a, long long b){
	while(b!=0){
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b){
	return a * b / gcd(a,b);
}

PhanSo tongrutgonmu2(PhanSo A, PhanSo B){
	PhanSo tmp;
	long long mc = lcm(A.mau, B.mau);
	tmp.tu = A.tu * (mc / A.mau) + B.tu * (mc/B.mau);
	tmp.mau = mc;
	
	long long l = gcd(tmp.tu, tmp.mau);
	tmp.tu /= l;
	tmp.mau /= l;
	PhanSo C;
	C.tu = tmp.tu * tmp.tu;
	C.mau = tmp.mau * tmp.mau;
	return C; 
}

PhanSo tich(PhanSo A, PhanSo B, PhanSo C){
	PhanSo D;
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	long long l = gcd(D.tu, D.mau);
	D.tu /= l;
	D.mau /= l;
	return D;
}

void process(PhanSo A, PhanSo B){
	cout<<tongrutgonmu2(A,B).tu<<"/"<<tongrutgonmu2(A,B).mau<<" "<<tich(A,B,tongrutgonmu2(A,B)).tu<<"/"<<tich(A,B,tongrutgonmu2(A,B)).mau<<endl;
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
} 
