#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i==1) {
				cout<<1<<" ";
				continue;
			}
			if(nt(i)){
			 cout<<i<<" "; continue;
			}
			for (int j = 2;j<=i;j++){
				if(i%j==0 ) {
				cout<<j<<" "; break;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}