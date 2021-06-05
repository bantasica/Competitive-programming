#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K; cin >> N >> K;
    map<long long, long long> AB;
    for(long long i = 0; i < N; ++i){
        long long A; long long B;
        cin >> A >> B;
        AB[A] += B;
    }
    long long pre = 0;
    long long res = 0;
    for(auto itr = AB.begin(); itr != AB.end(); ++itr) {
        K = K - itr->first + pre;
        if(K < 0){
            res = itr->first + K;
            break;
        }
        pre = itr->first;
        K += itr->second;
        res = pre + K;
    }        
    cout << res << endl;

    return 0;
}