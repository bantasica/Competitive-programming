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
    map<string, ll> mp;
    vector<string> st;

    REP(i, N){
        string a; cin >> a;
        st.push_back(a);
    }
    int L = st[0].length() - 1;
    char pre = st[0][L];
    mp[st[0]]++;
    int decide = 0;
    FOR(i, 1, N-1){
        if(mp.count(st[i])){
            decide = i;
            break;
        }else{
            if(pre == st[i][0]){
                L = st[i].length() -1;
                pre = st[i][L];
            }else{
                decide = i;
                break;
            }
        }
    }
    if(decide == 0) cout << "DRAW" << endl;
    else if(decide % 2 != 0) cout << "WIN" << endl;
    else cout << "LOSE" << endl;
    //cin >> ;

    //cout << << endl;

    return 0;
}