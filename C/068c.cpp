#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set<pair<int, int>> st;
    for(int i= 0; i < M; ++i){
        int a; int b;
        cin >> a >> b;
        st.emplace(a, b);
    }
    string s = "IMPOSSIBLE";
    for(int i = 2; i <= N; i++){
        if(st.count({1,i}) && st.count({i,N}))  s = "POSSIBLE"; 
    }

    cout << s << endl;

    return 0;
}