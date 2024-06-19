#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long s;
		s = ((1+n)*n)/2;
		cout<<s<<endl;
	}
	return 0;
}