

#include<bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; ++i)

bool check(string &s)
{
    int tmp = 0, len = s.length() - 1;
    FOR(i, 0, len)
    {
        tmp *= 10;
        tmp += s[i] - '0';
        tmp %= 11;
    }
    return tmp == 0;
}

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}