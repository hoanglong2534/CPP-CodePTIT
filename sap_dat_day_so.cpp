#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<bool> v(n,0);
		for(int i=0;i<n;i++){
			long long   x;
			cin>>x;
			if(x<0 || x>=n) continue;
			v[x] = 1;
		}
		for(int i=0;i<n;i++){
			if(v[i])
			cout<<i<<" ";
			else
			cout<<"-1"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
