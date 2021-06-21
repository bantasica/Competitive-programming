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
    //cin >> ;
    int N; cin >> N;
    vector<int> A(N);
    REP(i, N) cin >> A.at(i);

    sort(A.begin(), A.end());

    bool res = true;
    for(int i = 1; i <= N; ++i){
        if(A.at(i-1) != i) res = false;  
    }
    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
    //cout << << endl;

    return 0;
}