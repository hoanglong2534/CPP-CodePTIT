#include<bits/stdc++.h>
using namespace std;

void check(int a[], int n, int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			cout<<i+1<<endl;
			return;
		}	
	}
	cout<<"-1"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,x ;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	check(a,n,x);
	}
	return 0; 
}
