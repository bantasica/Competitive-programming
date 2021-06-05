#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    set<int> sa;
    set<int> sb;
    for(int i= 0; i < M; ++i){
        int a; int b;
        cin >> a >> b;
        if(a == 1) sa.insert(b);
        if(b == N) sb.insert(a);
    }
    string s = "IMPOSSIBLE";
    for(auto x : sb){
        auto z = sa.end();
        auto y = sa.find(x);
        if(y == sa.end()) s = "IMPOSSIBLE";
        else s = "POSSIBLE"; 
    }
    cout << s << endl;
 
    return 0;
}