#include<bits/stdc++.h>
using namespace std;

int  solve(string s){
		if(s.size() == 1) return 0;
		for(int i = 0; i < s.size() - 1; i++){
			if(s[i] != s[0]) {
				if(s[i] == s[i+1]) return 1;
			}
			return 0;
			
		}
		return 0;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(solve(s)) cout << 1 << endl;
		else cout << 0 << endl;
	}
} 
