#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    vector<long long> A(N, 0);
    for(int i = 0; i < N; i++) cin >> A.at(i);
    sort(A.begin(), A.end()); 

    int Q;
    cin >> Q;
    vector<long long> B(Q, 0);
    for(int i = 0; i < Q; ++i){
        cin >> B.at(i);
    }
    for(int i = 0; i < Q; ++i){
        long long m;
        auto position = lower_bound(A.begin(), A.end(), B.at(i));
        long long idx = distance(A.begin(), position);
        if(position == A.begin()){
            m = abs( A.at(0) - B.at(i));
        }else if(position == A.end()){
            m = abs( A.at(N - 1) - B.at(i));
        }else{
            m = min(abs(A.at(idx - 1) - B.at(i)), abs(A.at(idx) - B.at(i) ));
        }

        cout << m << endl;

    }
    //cout << << endl;

    return 0;
}