#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void solve(int n){
		for(int i =2;i<=n/2;i++){
			if(nt(i) && nt(n-i)){
				cout<<i<<" "<<n-i<<endl;
				return ;
			}
		}
		return;
	}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
 		solve(n);	
	}
	return 0;
}