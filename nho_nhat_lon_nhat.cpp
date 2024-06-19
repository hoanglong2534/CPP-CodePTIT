#include<bits/stdc++.h>
using namespace std;

string min(int n, int s){
	string r(n, '0');
	r[0] = '1',s-=1;
	for(int i=n-1; i>=0; i--){
		int d = r[i]-'0';
		if(s>9-d){
			r[i]='9';
			s-=9-d;
		}
		else{
			r[i]+=s; 
			break;
		}
	} 
	return r;
} 

string max(int n, int s){
	string  r(n,'0');
	for(int i=0;i<n;i++){
		int d = r[i] -'0';
		if(s>9-d){
			r[i]='9';
			s-=9-d;
		}
		else{
			r[i]+=s;
			break;
		}
	}
	return r;
}

int main(){
	int n,s;
	cin>>n>>s;
	if(s<=0 || s>9*n){
		cout<<"-1 -1\n";
	}
	else{
		cout<<min(n,s)<<" "<<max(n,s)<<endl;
	}
	return 0;
}