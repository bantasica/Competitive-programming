#include <bits/stdc++.h>
#include <random>
using namespace std;

#define WIN true
#define LOSE false
#define COST 0
#define SPREAD 1.2
#define PROFIT 4.2
#define DEPROFIT 2.0
#define bLot 0.01
#define tpf 4.75

list<int> monte;

int return_random(){
    int s;
    bool w;
    std::random_device rnd;     // 非決定的な乱数生成器を生成
    std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(1, 1000);        // [0, 999] 範囲の一様乱数

    s = rand100(mt);
    
    if(s <= 510) w = WIN;
    else w = LOSE;
    return w;
}

void init_monte(){
    monte.clear();
    monte.push_front(0);
    monte.push_back(1);
}

void calc_monte(bool w){
    if(w){
        monte.pop_front();
        if(!monte.empty()){            
            monte.pop_back();
        }
    }else{
            monte.push_back(monte.front() + monte.back());
    }
}

int main() {
    //cin >> ;
    init_monte();
    int Lots = 0;
    double sumpf = 0;
    double pf = 0;
    for (int i = 1; i <= 1000000; ++i){
        if(monte.empty()) init_monte();
        Lots = monte.front() + monte.back();
        if(return_random()){
            pf += (PROFIT - COST - SPREAD) * Lots;
            sumpf += Lots * bLot * tpf;
            calc_monte(WIN);
        }else{
            pf -= (DEPROFIT + COST + SPREAD) * Lots;
            sumpf += Lots * bLot * tpf;
            calc_monte(LOSE);
        }
        
        if(!monte.empty()){
            for (auto lst = monte.begin(); lst != monte.end(); ++lst){
                if(*lst == 50){
                    for (auto lls = monte.begin(); lls != monte.end(); ++ lls){
                        cout << *lls << ",";
                    }
                    cout << endl;
                    return 0;
                }
            }
        }
        //cout << "pf" << pf << endl;
    }
    //cout << "spf" << pf << endl;
    //cout << "tpf" << sumpf << endl;
    return 0;
}