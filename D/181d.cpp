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
    string s; cin >> s;
    vector<int> S(10, 0);
    vector<vector<int>> Q(124, vector<int>(10, 0));
    ll len = s.length();
    int j = 0;
    FOR(i, 1, 999){
        if(i % 8 == 0){
            string sa = to_string(i);
            for(int k = 0; k < sa.length(); k++){
                int p = sa[k] - '0';
                Q.at(j).at(p)++;
            }
            j++;
        }
    }    
    REP(i, len){
        int k = s[i] - '0';
        S.at(k)++;
    }
    bool ans = false;
    FOR(i, 1, 124){
        ans = false;
        FOR(j, 1, 9){
            if(S.at(j) >= Q.at(i).at(j)){
                ans = true;
            }else{
                ans = false;
                continue;
            }
        }
        if(ans == true) break;
    }
    //cin >> ;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    //cout << << endl;

    return 0;
}