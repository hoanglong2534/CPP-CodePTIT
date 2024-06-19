#include<bits/stdc++.h>
using namespace std;

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

long long a[100];
int k=0;
void check(){
	for(int i=1;i<=32;i++){
		if(nt(i)){
			int tmp = (int) pow(2,i)-1;
			if(nt(tmp)){
				a[k++]=tmp*(int)pow(2,i-1);
			}
		}
	}
}

int main(){
	check();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int ok=0;
		for(int i=0;i<n;i++){
			if(a[i]==n){
				ok=1; break;
			}
		}
		if(ok) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}