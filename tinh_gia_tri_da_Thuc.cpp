#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int t, n, st;
long long x;
int a[2005];

int main(){
	cin >> t;
	while(t--){
		long long ans  = 0;
		cin >> n >> st;
		for(int i = n-1; i >= 0; i--){
			cin >> a[i];
		}
		x = 1;
		for(int i = 0; i < n; i++){
			ans += a[i] * x;
			ans %= mod;
			x *= st;
			x %= mod;
		}
		cout << ans << endl;
	}
	return 0;
}
