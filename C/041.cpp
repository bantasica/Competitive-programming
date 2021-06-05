#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int,greater<int>> mp;
    for(int i = 0; i < N; ++i){
        int a = 0;
        cin >> a;
        mp.emplace(a, i+1);
    }
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->second << endl;
    }

    return 0;
}