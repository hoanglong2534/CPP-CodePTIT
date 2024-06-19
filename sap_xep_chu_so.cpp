#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		bool b[10]={0};
		int n; cin>>n;
		for(int i=1;i<=n;i++){
			string s; cin>>s;
		for(auto x:s)
			b[x-'0']=1;
		}
		for(int i=0;i<10;i++){
			if(b[i]==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
