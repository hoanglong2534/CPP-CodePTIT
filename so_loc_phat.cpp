#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int check ;
	while(n>0){
		int x=n%10;
		if(x == 0 || x==6 || x==8 ){
			check = 1;
		}
		else check = 0;
		n/=10;
	}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}
	return 0;
}