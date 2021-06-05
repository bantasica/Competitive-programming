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
    ll N;
    vector<ll> A(5);
    cin >> N;
    REP(i, 5) cin >> A.at(i);
    ll res = (N + A.at(0)-1)/A.at(0);;
    ll pre = res;
    FOR(i, 1, 4){
        ll r = (N + A.at(i)-1)/A.at(i);
        if(pre >= r) res++;
        else res = res + r - pre;
        pre = r;
    }

    cout << res << endl;

    return 0;
}