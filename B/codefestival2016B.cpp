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
    ll N, A, B;cin >> N >> A >> B;
    string s; cin >> s;
    ll tsuka = 0; ll kaigai = 0;
    
    REP(i, N){
        if(s[i] == 'a'){
            if(tsuka < A+B){
                cout << "Yes" << endl;
                tsuka++;
            }else{
                cout << "No" << endl;
            }
        }else if(s[i] == 'b'){
            if(tsuka < A+B && kaigai < B){
                cout << "Yes" << endl;
                tsuka++;kaigai++;
            }else{
                cout << "No" << endl;            
            }
        }else{
            cout << "No" << endl;
        }
    }
    //cin >> ;

    //cout << << endl;

    return 0;
}