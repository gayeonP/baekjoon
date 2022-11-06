#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include "level1.h"
using namespace std;

#if 0
int solution(string s) {
    int answer = 0;
    map<string, int> dic;
    dic["zero"] = 0;
    dic["one"] = 1;
    dic["two"] = 2;
    dic["three"] = 3;
    dic["four"] = 4;
    dic["five"] = 5;
    dic["six"] = 6;
    dic["seven"] = 7;
    dic["eight"] = 8;
    dic["nine"] = 9;

    size_t pos = 0;
    for (auto iter = dic.begin(); iter != dic.end(); iter++) {
        while ((pos = s.find(iter->first)) != string::npos) {
            s.replace(pos, iter->first.size(), to_string(iter->second));
        }
    }
    answer = stoi(s);
    return answer;
}
#endif

int main() {

#if 0
    vector<vector<int>> v {
            {1,4},
            {3,4},
            {3,10}
    };

    vector<int> vv;
    vector<int> ans;
    for (auto &vec: v) {
        for (auto &e: vec) {
            vv.push_back(e);
        }
    }

    for (int i = 0; i < vv.size(); i++) {
        if (count(vv.begin(), vv.end(), vv[i]) == 1) {
            ans.push_back(vv[i]);
        }
    }

    for (auto v: ans) {
        cout << v << ", ";
    }
#endif

//    cout << pow(int(sqrt(3)), 2);

#if 0
    int n = 5, a = 20, temp = 0;
    string b = "";
    for (int i = n - 1; i >= 0; i--) {
        b += to_string(((a >> i) & 1));
    }
    cout << b;

#endif

#if 1
    vector<int> a = {2,1,2,6,2,4,3,3};

    solution(5, a);

#endif

    return 0;
}
