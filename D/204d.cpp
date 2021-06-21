#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//定数
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007 //問題による
//イテレーション
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=ll(b);i--)
#define FORA(i,I) for(const auto& i:I)

int main() {
    int N; cin >> N;
    vector<int> T(N, 0);
    REP(i, N) cin >> T.at(i);

    vector<vector<ll>> dp(N+1, vector<ll>(2));
    ll sm = 0;
    REP(i, N) sm += T.at(i);
    ll S = sm / 2;
    
    FOR(i, 1, N-1){
        dp.at(i).at(0) = T.at(i);

    }

    //cin >> ;

    cout << result << endl;

    return 0;
}