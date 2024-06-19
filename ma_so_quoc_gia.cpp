#include<bits/stdc++.h>
using namespace std;
void check(string s){
	while(1){
		int p = s.find("084");
		if(p<0) break;
		s.erase(p,3);
	}
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		check(s);
	}	
	return 0;

}