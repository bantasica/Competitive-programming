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
    ll N; cin >> N;
    string s; cin >> s;
    vector<ll> E(N+1,0);
    vector<ll> W(N+1,0);
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 'E') E.at(i)=1;
        else W.at(i)=1;
    }
    ll result = INF64;
    for(int i = 1; i < N; ++i){
        E.at(i) += E.at(i-1);
        W.at(i) += W.at(i-1);
    }
    
    for(int i = 0; i < N; ++i){
        ll k = 0;
        if(i) k += W.at(i-1);
        k += E.at(N-1) - E.at(i);
        result = min(result, k);
    }

    cout << result  << endl;

    return 0;
}