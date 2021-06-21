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

ll conbination(ll N){
    ll R = N * (N-1) / 2;
    return R;
}

int main() {
    ll N; cin >> N;
    vector<ll> A(N, 0);
    REP(i, N) cin >> A.at(i);
    map<ll, ll> mp;
    REP(i, N) mp[A.at(i)]++;

    ll R = conbination(N);

    for(const auto& i: mp){
        if(i.second >= 2) R -= conbination(i.second);
    }
    //cin >> ;

    cout << R << endl;

    return 0;
}