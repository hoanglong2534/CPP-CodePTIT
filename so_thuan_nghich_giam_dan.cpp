#include<bits/stdc++.h>
using namespace std;

int tn(string s){
	string res = "";
	for(int i = s.size() - 1; i >= 0; i--){
		res += s[i];
	}
	if(res == s) return 1;
	return 0;
} 

bool check(string &a)
{
    if(a.length() == 1) return 0;
    int len = a.length() / 2;
    for(int i = 0; i < len; i++) if(a[i] != a[a.length() - i - 1]) return 0;
    return 1;
}

bool cmp(pair<string, int> &a, pair<string, int>&b){
	if(a.first.length() > b.first.length()) return 1;
    if(a.first.length() < b.first.length()) return 0;
    for(int i = 0; i < a.first.length();i++)
    {
        if(a.first[i] > b.first[i]) return 1;
        if(a.first[i] < b.first[i]) return 0;
    }
} 

int main(){
	string s;
	map<string, int> mp;
	while(cin >> s) if(check(s)) ++mp[s];
	vector<pair<string,int>> v;
	for(auto x : mp){
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for(auto x : v){
		cout << x.first << ' ' << x.second << endl;
	}		
}
