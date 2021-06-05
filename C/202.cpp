#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >>N;
    vector<int> A(N+1, 0);
    vector<int> B(N+1, 0);
    vector<int> C(N+1, 0);
    vector<long long> D(N+1, 0);

    for(int i = 1; i <= N; ++i){
        cin >> A.at(i);
    }
    
    for(int i = 1; i <= N; ++i){
        cin >> B.at(i);
    }
    for(int i = 1; i <= N; ++i){
        cin >> C.at(i);
    }   
    for(int i = 1; i <= N; ++i){
        int a = B.at(C.at(i));
        D.at(B.at(C.at(i)))++;
    }
    long long res = 0;

    for(int i = 1; i <= N; ++i){
        res += D.at(A.at(i));
    }
    //cin >> ;

    cout << res << endl;

    return 0;
}