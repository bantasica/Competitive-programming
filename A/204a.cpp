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
    int x, y; cin >> x >> y;
    int z;
    if(x == 0 && y == 1) z = 2;
    else if(x == 0 && y == 2) z = 1;
    else if(x == 1 && y == 0) z = 2;
    else if(x == 1 && y == 2) z = 0;
    else if(x == 2 && y == 0) z = 1;
    else if(x == 2 && y == 1) z = 0;
    else if(x == y) z = x;

    //cin >> ;

    cout << z << endl;

    return 0;
}