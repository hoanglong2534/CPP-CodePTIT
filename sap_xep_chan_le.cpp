#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		multimap<int, int> mp;
		int res = 0;
		for(int i = 0; i < n; i++){
			mp.insert(make_pair(a[i],i));
		}
		
		for(auto x : mp){
			b[res] = x.first;
			res +=2;
			if(res >= n) res = 1;
		}
		for (auto x : b){
			cout << x << " ";
		}
		cout << endl;
	
	}	
	return 0;
}
