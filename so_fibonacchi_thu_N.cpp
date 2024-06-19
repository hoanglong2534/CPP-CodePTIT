#include<bits/stdc++.h>
using namespace std;
long long fibo[100];
void fb(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i< 93;i++){
		fibo[i]= fibo[i-1]+fibo[i-2]; 
	}
}

int main(){
	fb();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibo[n]<<endl;
		
	}
	return 0;
}