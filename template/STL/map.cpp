
#include <bits/stdc++.h>
using namespace std;


int main(){

    // map<key, value>
    // 通常はkeyで降順にsortされる
    map<string,int> salary;

    // keyを昇順でsortされるようにする
    map<int, int,greater<int>> mp;


    salary["John"] = 1400;
    salary["Tom"] = 1000;
    salary["Harry"] = 0;

    int a = salary["John"]; // 1400
    int b = salary["Tom"]; // 1000
    int c = salary["Harry"]; // 0


    cout << m.size() << endl; // 何も要素を追加していないので当然 0
    cout << m[1] << endl; // 要素は存在しない, 自動で0が追加される
    cout << m.size() << endl; // 自動で要素が追加されているので 1

    cout << m.size() << endl; // 何も要素を追加していないので当然 0
    cout << m.at(1) << endl; // 要素は存在しない, Abort! out_of_range  
    std::map<int,int> dic{};

    dic.emplace(1,3); // dic.insert(std::make_pair(1,3))と同様のことができる 

    std::map<std::string, int> mp

    //mapを全数ループ
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        std::cout << "key = " << itr->first           // キーを表示
                        << ", val = " << itr->second << "\n";    // 値を表示
    }    

}