 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
 	int n;
 	cin>>n;
 	cin.ignore();
 	string s;
 	set<string> ss;
 	for(int i=0;i<n;i++){
	 	getline(cin,s);
	 	ss.insert(s);
	 }
	 cout<<ss.size();
 	return 0;
 }
