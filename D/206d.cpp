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
    vector<ll> A(N,0);
    REP(i, N) cin >> A.at(i);
    if(N == 1) {
        cout << 0 << endl;
        return 0;
    }
    ll R;
    if(N % 2 == 0) R = N/2;
    else R = floor(N/2);

    set<ll> st;
    REP(i, R){
        if(A.at(i) != A.at(N-i-1)){
            st.insert(A.at(i));
            st.insert(A.at(N-i-1));
        } 
    }

    //cin >> ;

    cout <<  st.size() - 1 << endl;

    return 0;
}