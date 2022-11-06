
#if 0
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0) answer = "Even";
    else answer = "Odd";
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (unsigned int i = 0; i < arr.size(); i++) {
        answer += arr[i];
    }
    answer = answer / arr.size();
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}
#endif

#if 0
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while (n != 0) {
        answer += (n % 10);
        n = n / 10;
    }
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (pow(int(sqrt(n)), 2) == n) {
        answer = pow(sqrt(n) + 1, 2);
    } else {
        answer = -1;
    }
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n != 0) {
        answer.push_back(n % 10);
        n = n / 10;
    }
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>

using namespace std;

string dec_to_binary (int n, int a) {
    string res = "";
    for (int i = n - 1; i >= 0; i--) {
        res += to_string((a >> i) & 1);
    }
    return res;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string ans = "", bit_arr1 = "", bit_arr2 = "";
    for (int i = 0; i < n; i++) {
        bit_arr1 = dec_to_binary(n, arr1[i]);
        bit_arr2 = dec_to_binary(n, arr2[i]);
        for (int j = 0; j < n; j++) {
            if (bit_arr1[j] == '1' || bit_arr2[j] == '1') ans += "#";
            else ans += " ";
        }
        answer.push_back(ans);
        ans = "";
    }
    return answer;
}
#endif

#if 0
#include <string>
#include <vector>
#include <map>

using namespace std;

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

#if 1
#include "level1.h"
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, double> temp;
    int not_clear = 0, reach_stage = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < stages.size(); j++) {
            if (stages[j] > i) reach_stage++;
            else if (stages[j] == i) {
                not_clear++;
                reach_stage++;
            }
        }
        double failure_rate = (double)not_clear / (double)reach_stage;
        temp.insert(pair<int, double> (i, failure_rate));
        not_clear = 0; reach_stage = 0;
    }
    vector<pair<int, double>> v_tem(temp.begin(), temp.end());
    sort(v_tem.begin(), v_tem.end(), [](pair<int, double> a, pair<int, double> b) {
        return a.second > b.second;
    });
    for (pair<int, double> it : v_tem) {
        answer.push_back(it.first);
    }
    return answer;
}
#endif






















