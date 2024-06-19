#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	int sum=0;
	while(n!=0){
		int x = n%10;
		sum = sum + x;
		n/=10;
	}
	return sum;
}

int smith(int n){
	int sum1 = sum(n);
	int sum2 = 0;
	int tmp = n;
	for(int i =2;i<=sqrt(n);i++){
		while(n%i==0){
			sum2 += sum(i);
			n/=i;
		}
	}
	if(tmp==n) return 0;
	if(n!=1) sum2 += sum(n);
	return sum1 == sum2 ;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(smith(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}