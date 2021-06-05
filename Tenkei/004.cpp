#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(H, vector<int>(W));
    vector<int> sum_H(H,0);
    vector<int> sum_W(W,0);
    //cin >> ;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A.at(i).at(j);
            sum_H.at(i) += A.at(i).at(j);
            sum_W.at(j) += A.at(i).at(j);
        }
    }
    int result = 0;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            result = sum_W.at(j) + sum_H.at(i) - A.at(i).at(j);
            cout << result << " ";
        }
        cout << endl;
    }

    //cout << << endl;

    return 0;
}