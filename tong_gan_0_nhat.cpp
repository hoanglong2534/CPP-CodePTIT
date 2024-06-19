#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int min = INT_MAX, ans;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i] + a[j]) < min) {
				min = abs(a[i] + a[j]);
				ans = a[i] + a[j];
			}
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
