#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int x=0,y=0;
		for(int j=1;j<=3;j++){
			int k; cin>>k;
			k==1?x++ : y++;
		}
		if(x>=2) cnt++;
	}
	cout<<cnt;
	return 0;
}