#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long s=1, tong = 0;
	for(int i =1;i<=n;i++){
		s= s*i;
		tong = tong + s;
	}
	cout<<tong<<endl;
	return 0;
}