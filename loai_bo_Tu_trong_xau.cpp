#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1;
	getline(cin,s1);
	string s2;
	cin>>s2;
	vector<string> v;
	for(int i=0;i<s1.length(); i++){
		if(s1[i] != ' '){
			int p=i;
			while(s1[p] != ' ' && p<s1.length()) p++;
			v.push_back(s1.substr(i,p-i));
			i=p;
		}
	}
	for(int i=0;i<v.size();i++){
		if(v[i] != s2) cout<<v[i]<<" ";
	}
	return 0;
}