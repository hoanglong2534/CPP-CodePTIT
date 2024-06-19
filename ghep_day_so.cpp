#include<bits/stdc++.h>
using namespace std;

void sx(int b[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]>b[j]){
				int temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>k>>n;
		int a[k][n];
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int b[k*n];
		for(int i=0;i<k*n;i++){
			b[i] = a[i/n][i%n];
		}
		sx(b,k*n);
		for(int i=0;i<k*n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
