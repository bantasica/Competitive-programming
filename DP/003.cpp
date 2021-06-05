#include <bits/stdc++.h>
using namespace std;



int main() {
    int N;
    cin >> N;
    vector<vector<int>> dp(N+1, vector<int>(3));
    vector<int> a(N+1, 0);vector<int> b(N+1, 0);vector<int> c(N+1, 0);
    for(int i = 1; i <= N; i++){
        cin >> a.at(i) >> b.at(i) >> c.at(i);
    }
    dp.at(0).at(0) = 0;
    dp.at(0).at(1) = 0;
    dp.at(0).at(2) = 0;
    dp.at(1).at(0) = a.at(1);
    dp.at(1).at(1) = b.at(1);
    dp.at(1).at(2) = c.at(1);    


    for(int i = 2; i <= N; i++){
        dp.at(i).at(0) = max(dp.at(i-1).at(1) + a.at(i), dp.at(i-1).at(2) + a.at(i));
        dp.at(i).at(1) = max(dp.at(i-1).at(0) + b.at(i), dp.at(i-1).at(2) + b.at(i));
        dp.at(i).at(2) = max(dp.at(i-1).at(0) + c.at(i), dp.at(i-1).at(1) + c.at(i));
    }
    //cin >> ;
    int res = max(dp.at(N).at(0), max(dp.at(N).at(1), dp.at(N).at(2)));
    cout << res << endl;

    return 0;
}