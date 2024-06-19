#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans = s.size();
		for(int i=0;i<s.size();i++){
			char c=s[i];
			int p=i+1;
			while(s.find(c,p)!=-1){
				p=s.find(c,p)+1;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
