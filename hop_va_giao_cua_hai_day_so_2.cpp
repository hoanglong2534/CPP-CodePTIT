#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + m);
		
		set<int> s;
		for(int i = 0; i < n; i++){
			s.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			s.insert(b[i]);
		}
		for(auto x : s){
			cout << x << " ";
		}
		cout << endl;
		
		vector<int> v;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i] == b[j]) v.push_back(a[i]);
			}
		}
		sort(v.begin(), v.end());
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
