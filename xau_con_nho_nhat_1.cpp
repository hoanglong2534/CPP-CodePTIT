#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	string a,b;
	while (t--){
		cin >> a >> b;
		int dd[26] = {}, s = INT_MAX, l , r;
		for(int i = 0; i < b.length(); i++) ++dd[b[i]-'a'];
		for(int i = 0; i < a.length(); i++) {
			int d[26] = {};
			for(int j = 1; j < a.length(); j++){
				d[a[j] - 'a']++;
				bool check = 0 ;
				for(int k  = 0; k < 26; k++){
					if(d[k] < dd[k]){
						check = 1;
						break;
					}
				}
				if(!check && s > j - i + 1){
					s = j - i + 1;
					l = i;
					r = j;
				}
			}
		}
		if(s == INT_MAX) cout << -1 << endl;
		else {
			for(int i = l; i<=r;i++) cout << a[i];
			cout<<endl;
			}
		}
	return 0;
}
