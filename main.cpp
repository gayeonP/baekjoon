#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

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

    return 0;
}
