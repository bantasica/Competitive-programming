#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int C;
    vector<int> P(N+1, 0);
    vector<int> sum_1(N+1, 0);
    vector<int> sum_2(N+1, 0);
    for(int i = 1; i <= N; ++i){
        cin >> C >> P.at(i);
        if(C == 1){
            sum_1.at(i) = sum_1.at(i-1) + P.at(i);
            sum_2.at(i) = sum_2.at(i-1);
        }else{
            sum_1.at(i) = sum_1.at(i-1);
            sum_2.at(i) = sum_2.at(i-1) + P.at(i);
        }
    }
    int Q;
    cin >> Q;
    vector<int> L(Q+1, 0);
    vector<int> R(Q+1, 0);
    for(int i = 1; i <= Q; ++i){
        cin >> L.at(i) >> R.at(i);
    }

    for(int i = 1; i <= Q; ++i){
        int resultA = sum_1.at(R.at(i)) - sum_1.at(L.at(i) - 1);
        int resultB = sum_2.at(R.at(i)) - sum_2.at(L.at(i) - 1);   
        cout << resultA << " " << resultB << endl;
    }
    //cout << << endl;

    return 0;
}