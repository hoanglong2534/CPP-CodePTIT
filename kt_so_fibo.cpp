#include<bits/stdc++.h>
using namespace std;
vector<bool> v(1001, 0);
void fibo()
{
    v[0] = v[1] = 1;
    int f1 = 0, f2 = 1;
    for (int i = 2; f1 + f2 <= 1000; ++i)
    {
        int f = f1 + f2;
        v[f] = 1;
        f1 = f2;
        f2 = f;
    }
}

int main(){
	fibo();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(fibo[n]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}