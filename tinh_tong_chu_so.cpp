#include<bits/stdc++.h>
using namespace std;
int tongchuso(int n){
	int s=0, x;
	while(n!=0){
		x=n%10;
		s=s+x;
		n/=10;
	}
	if(s>=10) {
		return tongchuso(s);
	}
	return s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s=0;
		cout<<tongchuso(n)<<endl;
	}
	return 0;
}
