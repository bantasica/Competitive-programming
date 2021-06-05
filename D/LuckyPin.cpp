#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    map<int, int> mp;
    for(int i = 0; i < S.length(); i++) {
        int a = S[i] - '0';
        mp[a]++;
    }

    for(int i = 0; i <= 999; i++){
        string s;
        if(i <= 9) s = "00" + to_string(i);
        if(i <= 99) s = "0" + to_string(i);
        for(int j = 0; j < 3; j++){
            
        }
    }
    //cin >> ;

    cout << S << endl;

    return 0;
}