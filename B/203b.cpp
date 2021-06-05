#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    int res = 0;
    string s;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= K; j++){
            s = to_string(i) + '0' + to_string(j);
            res += stoi(s);
        }
    }
    cout << res << endl;
    //cin >> ;

    //cout << << endl;

    return 0;
}
