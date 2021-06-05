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
    vector<string> s(N);
    ll A = 0; ll C = 0; ll H = 0; ll M = 0; ll R = 0;

    REP(i, N) {
        cin >> s.at(i);
        if(s.at(i).at(0) == 'A') A++;
        if(s.at(i).at(0) == 'C') C++;
        if(s.at(i).at(0) == 'H') H++;
        if(s.at(i).at(0) == 'M') M++;
        if(s.at(i).at(0) == 'R') R++;
    }
    ll result = 0;
    result += A * C * H;
    result += A * C * M;
    result += A * C * R;
    result += A * H * M;
    result += A * H * R;
    result += A * M * R;
    result += C * H * M;
    result += C * H * R;
    result += C * M * R;
    result += H * M * R;
    //cin >> ;

    cout << result  << endl;

    return 0;
}