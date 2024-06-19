#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		int x = *max_element(a,a+n);
		int y = *min_element(b,b+m);
		long long res = (long long)x*y;
		cout<<res<<endl;
		
	}
	return 0;
}
