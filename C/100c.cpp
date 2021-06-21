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

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}


int main() {
    ll N; cin >> N;
    vector<ll> A(N+1, 0);
    vector<ll> K(N+1, 0);
    REP(i, N) {
        cin >> A.at(i);
        if(A.at(i) % 2 == 0){
            const auto &res = prime_factorize(A.at(i));
            for(auto x:res){
                if(x.first == 2) K.at(i) = x.second;
            }
        }
    }
    ll res = 0;
    for(auto x : K){
        res += x;
    }
    cout << res << endl;
    //cin >> ;

    //cout << << endl;

    return 0;
}