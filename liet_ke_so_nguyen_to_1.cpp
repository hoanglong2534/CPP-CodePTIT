#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	for (int i = 2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int main(){
	int a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(int i = a+1;i<b;i++){
		if(nt(i)) cout<<i<<" ";
	}
	return 0;
}