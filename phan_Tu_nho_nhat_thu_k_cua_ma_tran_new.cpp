#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n][n];
		int b[n*n];
		int x = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[x] = a[i][j];
				x++;
			}
		}
		sort(b, b + n*n);
		for(int i = 0; i < n*n; i++){
			cout << b[k - 1];
			break;
		}
		cout << endl;
	}
	return 0;
}
