#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        int j = i;
        while (s[j] == s[i] && j < s.length())
            j++;
        cout << s[i] << j - i;
        i = j - 1;
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}