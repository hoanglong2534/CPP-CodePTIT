#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238 

struct diem{
	double x, y;
};

void nhap(diem &A){
	cin >> A.x >> A.y;
}

double dis(diem A, diem B){
	return sqrt(pow((A.x - B.x),2) + pow((A.y - B.y),2));
}


int main(){
	int t;
	cin >> t;
	diem A, B, C;
	double m, n, p;
	while(t--){
		nhap(A);
		nhap(B);
		nhap(C);
		m = dis(A,B);
		n = dis(B,C);
		p = dis(A,C);
		if(m + n > p && m + p > n && n + p > m){
			double s, r, ans;
			s = sqrt((m + n + p)*(m + n - p)*(-m + n + p)*(m - n + p))/4;
			r = (m*n*p)/(4*s);
			ans = PI * r * r;
			cout << fixed << setprecision(3) << ans << endl;
		}
		else{
			cout << "INVALID" << endl;
		}
		
		
	}
	return 0;
} 
