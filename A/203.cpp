#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    int res;
    if(a == b) res = c;
    else if(b == c) res = a;
    else if(a == c) res = b;
    else res = 0;
    cout << res << endl;
    //cout << << endl;

    return 0;
}