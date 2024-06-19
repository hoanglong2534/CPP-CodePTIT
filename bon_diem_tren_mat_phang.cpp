#include<bits/stdc++.h>
using namespace std;

struct diem{
	double x, y, z;
}; 

void nhap(diem &A){
	cin >> A.x >> A.y >> A.z;
}

diem vecto(diem A, diem B){
	diem v;
	v.x = B.x - A.x;
	v.y = B.y - A.y;
	v.z = B.z - A.z;
	return v;
}

int check(diem E, diem F, diem G){
	if((E.y * F.z - F.y * E.z) * G.x + (E.z * F.x - F.z * E.x) * G.y + (E.x * F.y - F.x * E.y) * G.z == 0){
		return 1;
	}
	return 0;
} 

int main(){
	diem A, B, C, D, E, F, G;
	int t;
	cin >> t;
	while(t--){
		nhap(A);
		nhap(B);
		nhap(C);
		nhap(D);
		E = vecto(A, B);
		F = vecto(A, C);
		G = vecto(A, D);
	
		if(check(E, F, G)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		
	}
	
	return 0;
}
