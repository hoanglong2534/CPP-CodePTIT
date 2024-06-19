#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n];
		ll max,l,r,ans,curr;
		max = curr = l = ans = 0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=k){
				a[i]=1;
				max++;
			}
			else{
				a[i]=0;
			}
		}
		r = max;
		ans = max;
		for(int i = l;i<r;i++){
			curr += a[i];
		}
		while(r<=n){
			ans = min(ans, max - curr);
			curr += (a[r]- a[l]);
			l++; r++;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
