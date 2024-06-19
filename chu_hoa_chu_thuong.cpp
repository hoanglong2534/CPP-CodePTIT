#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char s;
		cin>>s;
		if(islower(s)){
			cout<<(char)toupper(s)<<endl;
		}
		else cout<<(char)tolower(s)<<endl;
			
	}


	return 0;
}