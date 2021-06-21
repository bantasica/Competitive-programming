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
    int N, M; cin >> N >> M;
    vector<bool> A(M,false);
    vector<bool> B(M,false);
    if(M == 0) {
        cout << N << endl;
        return 0;
    }

    REP(i, M){
        int a, b;
        cin >> a >> b;
        a--;b--;
        A.at(a) = true;
        B.at(b) = true;
    }
    int result = N * M;

    REP(i, N){
        REP(j, M){
            if(i == j) continue;
            if(A.at(i) == false) result--;
            if(B.at(j) == false) result--;
        }
    }


    //cin >> ;

    cout << result << endl;

    return 0;
}