#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp) v.push_back(tmp);
		for(int  i = v.size() - 1; i >= 0; i--){
			if(i > 0) cout << v[i] << " ";
			else cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
