#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W; cin >> N >> W;
    vector<vector<long long>> dp(110, vector<long long>(100100));
    //cin >> ;
    vector<int> w(N+1, 0);
    vector<int> v(N+1, 0);

    for(int i = 1; i <= N; i++){
        cin >> w.at(i) >> v.at(i);
    }

    dp.at(0).at(0) = 0;
    

    for(int i = 1; i <= N; ++i){
        for(int j = 0; j <= W; ++j){
            //if(j < w.at(i)) dp.at(i).at(j) = dp.at(i-1).at(j);
            if(j - w.at(i) >= 0){
                dp.at(i).at(j) = max(dp.at(i-1).at(j-w.at(i)) + v.at(i), dp.at(i-1).at(j));
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}