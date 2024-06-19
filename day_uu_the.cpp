#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int cnt1 = 0, cnt2 = 0;
		string s;
		getline(cin, s);
		string tmp;
		stringstream ss(s);
		vector<string> a;
		while(ss >> tmp) a.push_back(tmp);
		int ok = 0;
		
		for(int i = 0 ; i < a.size(); i++){
			if(stoi(a[i]) % 2 == 0) cnt1 ++;
			else cnt2 ++;
		}
		
		if((a.size() % 2 == 0 && cnt1 > cnt2 ) || (a.size() % 2 == 1 && cnt1 < cnt2)){
			ok = 1;
		}
		if(ok) cout << "YES";
		else cout << "NO";
		cnt1 = cnt2 = 0;
		cout << endl;
	}
	return 0;
}
