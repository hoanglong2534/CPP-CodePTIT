#include<bits/stdc++.h>
using namespace std;

string s1="ABBADCCABDCCABD";
string s2="ACCABCDDBBCDDBB";
void solve(int n){
	double diem = 0;
	if(n==101){
		for(int i=0;i<15;i++){
			char c;
			cin>>c;
			if(c==s1[i]){
				diem += 10*1.0/15;
			}
		}
	}
	else if(n==102){
		for(int i=0;i<15;i++){
			char c;
			cin>>c;
			if(c==s2[i]){
				diem+=10*1.0/15;
			}
		}
	}
		cout<<fixed<<setprecision(2)<<diem;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve(n);
		cout<<endl;
	}
	return 0;
}