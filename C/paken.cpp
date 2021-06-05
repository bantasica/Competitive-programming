#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    long long result = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A.at(i).at(j);
        }
    } 
    for(int j = 0; j < M-1; j++){
        for(int k = j+1; k < M; k++){
            long long B = 0;
            for(int i = 0; i < N; i++){
                B += max(A.at(i).at(j), A.at(i).at(k));
            }
            result = max(result, B);
        }
    }
    //cin >> ;

    cout << result << endl;

    return 0;
}