

#include<bits/stdc++.h>

using namespace std;


#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define vi vector<int>

  
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        vi v;
        int n, k, x;
        cin >> n >> k;
        n *= n;
        FOR(i, 1, n)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }
    return 0;
}
