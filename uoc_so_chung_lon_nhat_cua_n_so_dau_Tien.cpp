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

void solve(long long n){
	long long r = 1;
	for(long long i = 1;i<=n;i++){
		r = r*i/ucln(r,i);
	}
	cout<<r<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}
	return 0;
}