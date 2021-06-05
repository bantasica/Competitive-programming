#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string res = "";

    for(int i = 0; i < s.length(); ++i){
        if(s.at(i) == '6'){
            res += '9';
        }else if(s.at(i) == '9'){
            res += '6';
        }else{
            res += s.at(i);
        }
    }
    cout << res << endl;

    return 0;
}