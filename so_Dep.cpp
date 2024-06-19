#include<bits/stdc++.h>
using namespace std;

int tn(string s){
	string r(s.rbegin(),s.rend());
	return r==s;
}

int check(string s){
	for(auto x:s){
		if((x-'0')%2==1) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(tn(s) && check(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}