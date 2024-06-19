#include<bits/stdc++.h>
using namespace std;

int tn(string s){
	string res = "";
	for(int i = s.size()-1; i >=0; i--){
		res += s[i];
	}
	if(res == s) return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res = "";
		for(int i  = 0; i < s.size(); i++){
			s[i] = toupper(s[i]);
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i]== 'A'|| s[i] == 'B' || s[i] == 'C'){
				res += '2';
			}
			if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
				res += '3';
			}
			if(s[i]== 'G'|| s[i] == 'H' || s[i] == 'I'){
				res += '4';
			}
			if(s[i]== 'J'|| s[i] == 'K' || s[i] == 'L'){
				res += '5';
			}
			if(s[i]== 'M'|| s[i] == 'N' || s[i] == 'O'){
				res += '6';
			}
			if(s[i]== 'P'|| s[i] == 'Q' || s[i] == 'R'|| s[i]=='S'){
				res += '7';
			}
			if(s[i]== 'T'|| s[i] == 'U' || s[i] == 'V'){
				res += '8';
			}
			if(s[i]== 'W'|| s[i] == 'X' || s[i] == 'Y'||s[i]=='Z'){
				res += '9';
			}
		}
		if(tn(res)) cout << "YES\n";
		else cout << "NO\n";
		
	}
	return 0;
}
