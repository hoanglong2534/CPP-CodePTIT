#include<bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name, bd;
    float d1, d2, d3, td;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.bd);
    cin >> A.d1 >> A.d2 >> A.d3;
    A.td = A.d1 + A.d2 + A.d3;
}

void in(ThiSinh &A)
{
    cout << A.name<< ' ' << A.bd << ' ' << setprecision(1) << fixed << A.td;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
