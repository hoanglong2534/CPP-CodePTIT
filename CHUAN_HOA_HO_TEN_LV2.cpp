#include<bits/stdc++.h>
using namespace std;

void check1(){
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin.ignore();
		getline(cin, s);
		for(int i = 0; i < s.length(); i++){
			s[i] = tolower(s[i]);
		}
		string tmp;
		stringstream ss(s);
		vector<string> v;
		while(ss >> tmp) v.push_back(tmp);
		for(int i = 0; i < v.size(); i++){
			v[i][0] = toupper(v[i][0]);
		}
		
		if(n == 1){
		cout << v[v.size() - 1] << " ";
		for(int i = 0; i < v.size()-1; i++){
			cout << v[i] << " ";
			}	
		}

		if(n == 2){
			for(int i = 1; i < v.size(); i++){
				cout << v[i] << " ";
			}
			cout << v[0];
		}
		
		cout << endl;
		
	}
	return 0;
} 
