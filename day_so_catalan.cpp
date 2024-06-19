#include<bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=a;i<b;i++)
#define FOR(i,a,b) for(int i =a; i<=b;i++)
int n, s[20005], a[20005], len;

void fact(int x, int delta)
{
	for(int i=2; i*i <= x; i++){
		while(x%i ==0){
			s[i] += delta;
			x/=i;
		}
	}
	if(x != 1) s[x] += delta;
}

void mul(int x){
	len +=5;
	F(i,0,len) a[i] *=x;
	F(i,0,len){
		a[i+1] +=a[i] / 10;
		a[i] %=10;
	}
	while(len >0 && a[len -1]==0) --len;
 }
 
int main(){
	cin>>n;
	n++;
	FOR(i,1,n) fact(2*n - i +1, 1);
	int st = n+1;
	FOR(i,1,st) fact (i, -1);
	a[0] = len = 1;
	F(i,1,20005) while (s[i]--) mul(i);
	for(int i = len - 1; i>=0; i--) cout << a[i];
	return 0;
}
