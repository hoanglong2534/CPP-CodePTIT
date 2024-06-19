#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		unordered_map<int,int> s;
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		int cnt = 0;
	
		for(int i = 0; i < n ; i++){
			cnt += s[a[i] - k] + s[a[i] + k];
			s[a[i]]++; 
	}
		cout << cnt << endl;
		
	} 
	return 0;
} 
