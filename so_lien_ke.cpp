#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int check;
    for (int i = 1; i < s.length(); ++i)
    {
        if (abs(s[i] - s[i - 1]) != 1)
        {
           cout<<"NO\n";
           return;
        }
    }
    cout<<"YES\n";
    
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}