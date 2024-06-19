#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s; cin>>s;
		int k; cin>>k;
		if(s.length()<26){
			cout<<0<<endl;
			continue;
		}
		set<char> se;
		for(char x:s){
			se.insert(x);
		}
		if(26-se.size() <=k){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
		
	}
	return 0;
}  
