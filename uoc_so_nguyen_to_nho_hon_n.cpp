#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

void check(int n){
	for(int i = 2;i<=n;i++){
		if(nt(i)) cout<<i<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		check(n);
		cout<<endl;
	}
	return 0;
}