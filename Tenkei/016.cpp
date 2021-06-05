#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long A, B, C;
    cin >> A >> B >> C;
    long long result = 9999;
    for(int i = 0; i <= 9999; i++){
        for(int j = 0; j + i <= 9999; j++){
            long long k = (N - A * i - B * j) / C;
            long long sum = A * i + B * j + C * k;
            if(k < 0 || i + j + k > 9999) continue;
            if(sum == N) {
                result = min(result, i + j + k);
            }
        }
    }
    

    cout << result << endl;

    return 0;
}