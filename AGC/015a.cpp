#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    if(A > B) cout << 0 << endl;
    else if(N == 1) {
        if(A == B) cout << 1 << endl;
        else cout << 0 << endl;
    }
    else cout << (B - A) * (N - 2) + 1 << endl;

    return 0;
}