#include<bits/stdc++.h>
using namespace std;

int check(int n){
	int dem1=0,dem2=0;
	while(n!=0){
		int x = n%10;
		if(x%2==1) dem1++;
		else dem2++;
		n/=10;
	}
	if(dem1==dem2) return 1;
	else return 0;
	
}
int main(){
	int n;
	cin>>n;
	int d=0;
	for(int i=pow(10,n-1);i<=pow(10,n)-1;i++){
		if(check(i)){
			cout<<i<<" ";
			d++;
			if(d==10){
				cout<<endl;
			}
				d%=10;
		}
	}
	return 0;
}