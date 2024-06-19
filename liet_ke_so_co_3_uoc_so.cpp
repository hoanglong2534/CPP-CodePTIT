#include<bits/stdc++.h>
using namespace std;
int sang[1001];
void sieve(){
	for(int i=0;i<=1000;i++){
		 sang[i]=1;
	}
	sang[0] = sang[1]=0;
	for(int i=2;i<=sqrt(1000);i++){
		if(sang[i]){
			for(int j = i*i;j<=1000;j+=i){
				sang[j]=0;
			}
		}
	}
}
int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i =1;i<=sqrt(n);i++){
			if(sang[i]){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
		
	}
	return 0;
}