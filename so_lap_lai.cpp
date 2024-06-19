#include<bits/stdc++.h>
using namespace std;

long long ucln(long long a,long long b){
	while(b!=0){
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}


int main(){
   	int t; cin>>t;
   	while(t--){
   		long long a,x,y;
   		cin>>a>>x>>y;
   		int d = ucln(x,y);
   		for(int i =1;i<=d;i++){
   			cout<<a;
		   }
		   cout<<endl;
	   }
    return 0;
}