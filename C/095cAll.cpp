#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, Y; cin >> A >> B >> C >> X >> Y;
    int ans = 1000000001;
    for(int i = 0; i < 100001; ++i){
        ans = min(ans, A * max(X-i, 0) + B * max(Y-i, 0) + C * 2 * i);
    }

    cout << ans << endl;
    //cin >> ;

    //cout << << endl;

    return 0;
}