#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int tang(int n){
	while(n>=10){
		int x=n%10;
		if(x <= (n/10)%10) return 0;
		n/=10;
	}
	return 1;
}

int giam(int n){
	while(n>=10){
		int x=n%10;
		if(x>= (n/10)%10) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i = pow(10,n-1); i<= pow(10,n)-1;i++){
			if( (tang(i) || giam(i)) && nt(i) ){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}