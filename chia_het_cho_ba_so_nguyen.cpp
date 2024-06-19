#include<bits/stdc++.h>
using namespace std;

long long ucln(long long a, long long b){
	while(b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}

long long bcnn(long long a, long long b){
	return a*b/ucln(a,b);
}

void check(){
	long long x,y,z,n;
	cin>>x>>y>>z>>n;
	long long s = bcnn(bcnn(x,y),z);
	long long l = pow(10,n-1), r = pow(10,n)-1;
	if(s > r )	cout<<"-1\n";
	else if(l % s == 0) cout<<l<<endl;
	else {
	long long k = l/s;
	cout<<s*(k+1)<<endl;
	}
}


int main(){
	int t; cin>>t;
	while(t--){
	
		check();
		
	}
	return 0;
}