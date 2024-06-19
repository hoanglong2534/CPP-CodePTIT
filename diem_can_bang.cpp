#include<bits/stdc++.h>
using namespace std;

int n; 
int a[10000];
int s1 = 0;
int tong = 0;

int solve(int a[], int n){
	for(int i = 0; i < n; i++){
			tong += a[i];		
		}
	for(int i = 0; i < n; i++){
		tong -= a[i];
		if(s1 == tong) return i + 1;
		else s1 += a[i];
	}
	return -1;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];		
		}
		cout << solve(a,n) << endl;
	}
		
	return 0; 
}
