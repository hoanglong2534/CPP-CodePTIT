#include<bits/stdc++.h>
using namespace std;

int cnt[1000001]={0};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int ok = 1;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cnt[a[i]]++;
			if(cnt[a[i]]==2){
				cout<<a[i]<<endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout<<"-1\n";
		for(int i=0; i<n; i++){
			cnt[a[i]] =0;
		}
		
	}
	return 0;
}
