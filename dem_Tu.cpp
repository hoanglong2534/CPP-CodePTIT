#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		int dem = 0;
		stringstream ss(s);
			string x;
		while(ss >> x){
			dem++;
			}
		cout<<dem<<endl;
	}
	return 0;
}