//標準関数をすべてインクルードする。
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int ans = 0;
    for (int i = 0; i <= A; ++i){
        for (int j = 0; j <= B; ++j){
            for (int k = 0; k <= C; ++k){
                int res = i * 500 + j * 100 + k * 50;
                if (res == X) ++ans;
            }
        }
    }

    cout << ans << endl;

    return 0;
}