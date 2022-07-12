#define _CRT_SECURE_NO_WARNINGS
// 15596
#if 0

#include <vector>

long long sum(std::vector<int>& a) {
	long long result = 0;
	for (int i = 0; i < a.size(); i++) {
		result += a[i];
	}
	return result;
}

#endif
// 4673
#if 0

#include <stdio.h>
int arr[10000] = { 0, };

void self_num() {
	int temp_result = 0, temp = 0;
	for (int i = 1; i <= 10000; i++) {
		temp = i;
		temp_result = i;
		while (temp > 0) {
			temp_result += temp % 10;
			temp /= 10;
		}
		arr[temp_result - 1] = 1;
	}
}

int main() {
	self_num();
	for (int i = 0; i < 10000; i++) {
		if (arr[i] == 0)
			printf("%d\n", i + 1);
	}
}

#endif
// 1065
#if 0

#include <stdio.h>

int equal_diff(int n) {
	int temp = n, i = 0;
	int arr[4] = { 0, };
	while (n > 0) {
		temp = n % 10;
		arr[i] = temp;
		n /= 10;
		i++;
	}
	if (arr[3] != 1) {
		if ((arr[0] - arr[1]) == (arr[1] - arr[2])) return 1;
		else return 0;
	}
	else return 0;
}
 
int main() {

	int n = 0, result = 0;
	scanf("%d", &n);

	if (n >= 100) {
		result = 99;
		for (int i = 100; i <= n; i++) {
			if (equal_diff(i) == 1) result++;
		}
	}
	else result = n;
	printf("%d\n", result);

	return 0;
}

#endif