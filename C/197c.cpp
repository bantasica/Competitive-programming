#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; ++i){
        cin >> A[i];
    }

    //前と後ろから足す。
    long long B = 0;
    long long C = 0;
    long long oB = 0;
    long long oC = 0;
    int M = 0;
    if(N % 2 == 0) M = N/2;
    else M = N/2 +1;
    int K = N;
    for(int i = 0; i < M; ++i){
        if(B > C){
            C += A[N -i - 1];
            oC |= A[N -i - 1];
            K = K - 1;
        } 
        else if(B < C) {
            B += A[i];
            oB |= A[i];
            K = K - 1;
        }else if(B == C && K >= 2){
            B += A[i];
            C += A[N -i - 1];
            oB |= A[i];
            oC |= A[N -i - 1];
            K = K -2;
        }else if(B == C && K == 1) {
            B += A[i];
            oB |= A[i];
            K = K - 1;
        }
    }
    long long res = oB ^ oC;
    cout << res << endl;

    return 0;
}