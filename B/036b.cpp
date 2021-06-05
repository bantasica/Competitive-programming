#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//定数
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007 //問題による
//イテレーション
#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i:I)
int main() {
    int N; cin >> N;
    vector<vector<string>> S(N, vector<string>(N));
    vector<string> ss(N);
    rep(i, N) cin >> ss.at(i);

    rep(i, N){
        rep(j, N){
            S.at(i).at(j) = ss.at(i).at(j);
        }
    }

    rep(j, N){
        repd(i, N){
            cout << S.at(i).at(j);
        }
        cout << endl;
    }
    //cin >> ;

    //cout << << endl;

    return 0;
}
