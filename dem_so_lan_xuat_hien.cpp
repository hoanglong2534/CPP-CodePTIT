#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int cnt = 0;
		for(int i=0;i<n;i++){
			if(a[i]==x) cnt++;
			}
		if(cnt==0) cout<<"-1\n";
		else cout<<cnt<<endl;
	}
	return 0;
}
