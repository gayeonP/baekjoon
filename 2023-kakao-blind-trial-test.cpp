//
// Created by 박가연 on 2022/09/14.
//
// 1번
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<vector<int>> v) {
    vector<int> ans;
    vector<int> x;
    vector<int> y;

    for (int i = 0; i < 3; i++) {
        x.push_back(v[i][0]);
        y.push_back(v[i][1]);
    }
    for (int i = 0; i < 3; i++) {
        if (count(x.begin(), x.end(), x[i]) % 2 == 1) {
            ans.push_back(x[i]);
        }
    }
    for (int i = 0; i < 3; i++) {
        if (count(y.begin(), y.end(), y[i]) % 2 == 1) {
            ans.push_back(y[i]);
        }
    }

    return ans;
}
#endif
// 2번
#if 0
#include <iostream>

using namespace std;

int solution(void) {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
#endif
// 3번
#if 0
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=0; i<n; i++){
        answer.push_back(i+1);
    }
    return answer;
}
#endif