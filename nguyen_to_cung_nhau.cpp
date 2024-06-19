#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int ucln(long long a,long long b){
	while(b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int d=0;
		for(int i=1;i<=x;i++){
			if(ucln(i,x)==1) d++;
		}
		if(nt(d)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}