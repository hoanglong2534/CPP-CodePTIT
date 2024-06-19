#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> mp;
		vector<int> v; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp.insert(make_pair(a[i], i)); 
		}
		
		for(auto x : mp){
			v.push_back(x.second);
		}
		int res , ans;
		for(int i = 0; i < v.size() - 1; i++){
			for(int j = i + 1; j < v.size(); j++){
				res = v[j] - v[i];
				ans = max(ans, res);
			}
		}
		cout << ans << endl;		
	
	}
	return 0;
} 
