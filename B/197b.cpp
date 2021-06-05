#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    --X; --Y;

    vector<string> S(H);

    for (int i = 0; i < H; ++i){
        cin >> S[i];
    }
    int res = 0;
    //yを固定 Xより左
    for (int i = X-1; i >= 0; --i){
        if(S[i].at(Y) == '.') ++res;
        else break;
    }
    for (int i = X+1; i <= H-1; ++i){
        if(S[i].at(Y) == '.') ++res;
        else break;       
    }
    //xを固定
    for (int i = Y-1; i >= 0; --i){
        if(S[X].at(i) == '.') ++res;
        else break;
    }
    for (int i = Y+1; i <= W-1; ++i){
        if(S[X].at(i) == '.') ++res;
        else break;       
    }   

    cout << res+1 << endl;

    return 0;
}