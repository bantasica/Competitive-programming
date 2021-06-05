#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;
    //cin >> ;
    long long bit = 0;
    bit = (bit << A);
    for(int i = 0; i < B; ++i){
        bit += (1 << i);
    }
    
    if(__builtin_popcount(bit) == B)
        cout <<bitset<64>(bit) << endl;

    long long res = 0;
    long long n = pow(2, A+B);
    for(int i = 0; i < 1000000000; i++){
        if(__builtin_popcount(bit) == B){
            ++res;
            cout <<bitset<64>(bit) << endl;
        }
        if(res == K) break;
        
        bit++;
    }
    string result = "";

    for(int i = 0; i < (A+B); ++i){
        if (bit & (1<<i)){
            result += 'b';
        }else{
            result += 'a';
        }
    }
    cout << result << endl;
    return 0;
}