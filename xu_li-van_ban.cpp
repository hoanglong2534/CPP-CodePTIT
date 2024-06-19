#include<bits/stdc++.h>
using namespace std;

int main(){
	
    string s;
    vector<string> vs;
    while(cin >> s) vs.push_back(s);
    for(int i = 0; i < vs.size(); ++i) for(int j = 0; j < vs[i].length(); j++) vs[i][j] = tolower(vs[i][j]); 
	
//	string s;
//	getline(cin, s);
//	for(int i = 0; i < s.size(); i++){
//		s[i] = tolower(s[i]);
//	}
//	string tmp;
//	stringstream ss(s);
//	vector<string> v;
//	while(ss >> tmp) v.push_back(tmp);
	
	bool  check = 1; 
	for(string  x : vs ){
		if(x[x.length()-1] == '.' || x[x.length()-1] == '?' || x[x.length() - 1] == '!'){
			if(check) x[0] = toupper(x[0]);
			x.erase(x.end()-1);
			if(x != "") cout << x;
			cout << endl; 
			check = 1;
		}
		else{
			if(check){
				x[0] = toupper(x[0]);
				cout << x << ' ';
				check = 0;
			}
			else cout << x << ' ';
		}
		
	}
	
	return 0;
}
