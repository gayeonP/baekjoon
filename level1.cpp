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

#if 1
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}
#endif