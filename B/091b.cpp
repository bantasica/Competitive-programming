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
    ll N, M;cin >> N;
    map<string, ll> mpN;
    REP(i, N) {
        string s;
        cin >> s;
        mpN[s]++;
    }
    cin >> M;
    REP(i, M){
        string s;
        cin >> s;
        mpN[s]--;
    }

    ll res = 0;
    for(auto x: mpN){
        res = max(res, x.second);
    }

    if(res < 0) res = 0;
    cout << res << endl;
    //cin >> ;

    //cout << << endl;

    return 0;
}