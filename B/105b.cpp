#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int res = 0;
    for(int i = 1; i <= N; ++i){
        int r = 0;
        for(int j = 1; j <= i; ++j){
            if(i % 2  == 1){
                if(i % j == 0) r++;
            }
        }
        if(r == 8) res++;
    }

    //cin >> ;

    cout << res << endl;

    return 0;
}