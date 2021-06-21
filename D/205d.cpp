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
    ll N, Q; cin >> N >> Q;
    map<ll, bool> A;
    FOR(i, 1, 100000) A[i] = false;

    REP(i, N){
        ll a;
        cin >> a;
        A[a] = true;
    }
    map<ll, ll> B;
    REP(i, Q){
        ll b;
        cin >> b;
        B[b] = i;
    }
    ll j = 1;
    vector<ll> P(Q, 0);
    FOR(i, 1, 100000){
        if(A[i] == false) {
            if(B.count(j)){
                P.at(B[j]) = i;
            }
            j++;
        }
    }
    REP(i, Q){
        cout << P.at(i) << endl;
    }
    //cin >> ;

    //cout << << endl;

    return 0;
}