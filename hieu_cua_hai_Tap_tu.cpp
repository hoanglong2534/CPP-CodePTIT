#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		string tmp;
		stringstream ss(s1);
		set<string> ss1;
		while(ss >> tmp) ss1.insert(tmp);
		
		string tmp2;
		stringstream sss(s2);
		set<string> ss2;
		while(sss >> tmp2) ss2.insert(tmp2);
		
		set<string> ans; 
		for(const auto& x : ss1){
			if(ss2.find(x) == ss2.end()){
				ans.insert(x);
			}
		}
		for (const auto& x : ans){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
