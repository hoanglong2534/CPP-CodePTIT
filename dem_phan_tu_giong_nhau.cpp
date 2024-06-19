#include<bits/stdc++.h>
using namespace std;

int cnt[1000001] = {0};

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		memset(cnt,0,sizeof(cnt)) ;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}	

		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(cnt[a[i][j]] == i)
					cnt[a[i][j]]++;
				if(cnt[a[i][j]] == n) {
					ans++;
					cnt[a[i][j]] = 0;
				}				
			}	
		}
		cout << ans << endl;
		
	}
	
	return 0;
}
