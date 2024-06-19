#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		set<int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp.insert(a[i]);
		}	
		int ok = -1;
		
		for(int i = 0; i < n; i++){
			int res = x + a[i];
			if(mp.find(res) != mp.end()){
				ok = 1;
				break;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
