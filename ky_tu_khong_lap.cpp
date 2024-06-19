#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
	    cin >> s;
	    int dd[26] = {0};
	    for (auto x:s)
	        dd[x - 'A']++;
	    for (auto x:s)
	    {
	        if (dd[x - 'A'] == 1)
	            cout << x;
	    }
	    cout << endl;
	}
	return 0;	
}
