#include<bits/stdc++.h>
using namespace std;

int check(long long k, int n){
	int s=0;
	for(int i=1;i<=n;i++){
		s = s + i%k;
	}
	if(k==s) return 1;
	else return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long k; cin>>k;
		if(check(k,n)) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}