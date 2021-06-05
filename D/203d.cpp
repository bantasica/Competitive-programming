#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K; cin >> N >> K;

    vector<vector<long long>> A(N, vector<long long>(N));
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> A.at(i).at(j);
        }
    }
    vector<vector<long long>> res(640000);
    long long k = 0;
    if(N != K){
        for(int i = 0; i <= N - K; i++){
            for(int j = 0; j <= N - K; j++){
                for(int n = i; n <= i+N-K; n++){
                    for(int m = j; m <= j+N-K; m++){
                        res.at(k).push_back(A.at(n).at(m));
                    }
                }
                sort(res.at(k).begin(), res.at(k).end(),greater<int>());
                k++;
            }
        }
    }else{
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < N; ++j){
                res.at(k).push_back(A.at(i).at(j));
            }
            sort(res.at(k).begin(), res.at(k).end(),greater<int>());
        }
    }
    int median = floor(K * K / 2) + 1;
    long long result = 1000000010;
    if(k != 0){
        for(int i = 0; i < k; i++){
            result = min(result, res.at(i).at(median-1));
        }
    }else{
        result = min(result, res.at(0).at(median-1));
    }
    //cin >> ;

    cout << result << endl;

    return 0;
}