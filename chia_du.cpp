#include<bits/stdc++.h>
using namespace std;

void solve(){
		int a,m;
		cin>>a>>m;
	for(int i =1;i<=m-1;i++){
		if(a*i%m ==1){
			cout<<i;
			return;
		}
	}
	cout<<"-1";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
		
	}
	return 0;
}