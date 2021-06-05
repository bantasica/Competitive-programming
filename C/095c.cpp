#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, Y; cin >> A >> B >> C >> X >> Y;
    //cin >> ;
    long long res = 0;
    if((A+B) <= C*2){
        cout << A * X + B * Y << endl;
        return 0;
    }else{
        if(X >= Y){
            res = Y * C * 2;
            if(A <= 2 * C) res += (X-Y) * A;
            else res += (X-Y) * C * 2;
        }else{
            res = X * C * 2;
            if(B <= 2 * C) res += (Y-X) * B;
            else res += (Y-X) * C * 2;
        }
    }
    cout << res << endl;

    return 0;
}