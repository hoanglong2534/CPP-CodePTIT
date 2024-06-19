#include<bits/stdc++.h>
using namespace std;

long long nt(long long n){
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}


void solve(long long n){
		long long r;
		for(long long i = 1 ; i<=sqrt(n); i++){
				if(n%i==0){
					if(nt(n/i)){
						cout<<n/i<<endl;
						return;
					}
					if(nt(i)) r = i;
				}
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