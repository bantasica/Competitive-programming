#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    //cin >> ;
    int res = 0;
    int m = 0;
    for(int i=0; i < s.length(); i++){
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
            res++;
            m = max(m, res);
        }else{
            res = 0;
        }
    }
    cout <<  m << endl;

    return 0;
}