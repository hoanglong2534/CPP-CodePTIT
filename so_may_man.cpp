#include<bits/stdc++.h>
using namespace std;

void  check(string s){
		if(s.length()==1) cout<<"0"<<endl;
		else {
		string b = s.substr(s.length()-2,2);
		if(b=="86") cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
	


int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		check(s);
	}
	return 0;
}