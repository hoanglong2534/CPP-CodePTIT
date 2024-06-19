#include<bits/stdc++.h>
using namespace std;

int tn(long long n){
	long long x =0, m=n;
	while(n!=0){
	x = x*10 + n%10;
	n/=10;
	}
	if(x==m) return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(tn(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}