#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//定数
#define INF32 2147483647 //2.147483647×10^{9}:32bit整数のinf
#define INF64 9223372036854775807 //9.223372036854775807×10^{18}:64bit整数のinf
#define MOD 1000000007 //問題による

int main() {
    string s; cin >> s;
    vector<int> a(4,0);
    for(int i = 0; i < 4; ++i) a.at(i) = s[i] - '0';
    int res = 0; int b = 0;
    for(int bit = 0; bit < (1<<4); ++bit){
        res = a.at(0);
        for(int i = 1; i < 4; ++i){
            if(bit & (1<<i)){
                res += a.at(i);
            }else{
                res -= a.at(i);
            }
        }
        if(res == 7){
            b = bit;
            break;
        }
    }
    string result;
    
    result = to_string(a.at(0));
    for(int i = 1; i < 4; ++i){
        if(b & (1<<i)){
            result += "+" + to_string(a.at(i));
        }else{
            result += "-" + to_string(a.at(i));
        }
    }
    
    //cin >> ;

    cout << result << "=7" << endl;

    return 0;
}