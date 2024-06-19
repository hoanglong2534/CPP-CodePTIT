#include<bits/stdc++.h>
using namespace std;

void pt(int n, int k){
	vector<int> v;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
		if(n==1) break;
	}
	if(n>1) v.push_back(n);
	if(k>v.size()) cout<<"-1";
	else cout<<v[k-1];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		pt(n,k);
		cout<<endl;
	}
	return 0;
}