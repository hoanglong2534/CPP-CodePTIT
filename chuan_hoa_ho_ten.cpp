#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	string tmp;
	stringstream ss(s);
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size() - 1; i++){
		v[i][0] = toupper(v[i][0]);
		if(i != v.size()-2)
		cout << v[i] << " ";
		else cout << v[i];
	}
	cout << ",";
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	string x;
	stringstream aa(s);
	vector<string> k;
	while(aa >> x) k.push_back(x);
	cout << " " << k[k.size()-1];
		
	return 0;
}
