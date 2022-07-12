#define _CRT_SECURE_NO_WARNINGS	
// 11718
#if 0

#include <stdio.h>

int main() {

	

	return 0;
}

#endif
// 10818
#if 0

#include <stdio.h>
#include <vector>

int main() {
	
	int n = 0, min = 0, max = 0, temp = 0;
	std::vector<int> v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		v.push_back(temp);
		if (i == 0) {
			min = temp;
			max = temp;
		}
		else {
			if (max < temp) max = temp;
			if (min > temp) min = temp;
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}

#endif
// 2562
#if 0

#include <stdio.h>

int main() {

	int arr[9] = { 0, };
	int max = 0, index = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}

	printf("%d\n%d\n", max, index + 1);

	return 0;
}

#endif
// 2577
#if 0

#include <stdio.h>
#include <math.h>

int main() {

	int a = 0, b = 0, c = 0, i = 1, temp = 0, _flag = 1;
	int arr[10] = { 0, };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	
	while (_flag) {
		temp = (a * b * c) % (int)pow(10, i);
		if (temp == (a * b * c)) _flag = 0;
		temp /= (int)pow(10, i - 1);
		arr[temp]++;
		i++;
	}

	for (int j = 0; j < 10; j++)
		printf("%d\n", arr[j]);

	return 0;
}

#endif
// 3052
#if 0

#include <stdio.h>

int main() {

	int arr[10] = { 0, };
	int count = 1, _flag = 1;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) _flag = 0;
		}
		if (_flag) count++;
		_flag = 1;
	}

	printf("%d\n", count);

	return 0;
}

#endif
// 1546
#if 0

#include <stdio.h>
#include <vector>

int main() {

	int n = 0;
	float temp = 0, max = 0;
	std::vector<float> v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%f", &temp);
		v.push_back(temp);
		if (temp > max) max = temp;
	}
	temp = 0;
	for (int i = 0; i < n; i++) {
		v[i] = (v[i] / max) * 100;
		temp += v[i];
	}

	printf("%0.2f\n", temp / n);

	return 0;
}

#endif
// 8958
#if 0

#include <stdio.h>

int main() {

	int n = 0, result = 0, temp = 0;
	char arr[80] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		for (int j = 0; arr[j] != 0; j++) {
			if (arr[j] == 'O') {
				if (temp > 0) {
					result += (temp + 1);
				}
				else result++;
				temp++;
			}
			else temp = 0;
			arr[j] = 0;
		}
		printf("%d\n", result);
		result = 0;
		temp = 0;
	}

	return 0;
}

#endif
// 4344
#if 0

#include <stdio.h>
#include <vector>

int main() {

	int t = 0, n = 0;
	float temp = 0, result = 0;
	std::vector<float> v;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%f", &temp);
			v.push_back(temp);
			result += temp;
		}
		temp = 0;
		for (int j = 0; j < n; j++) {
			if (v[j] > (result / n))
				temp++;
		}
		printf("%0.3f%%\n", (temp / n) * 100);
		v.clear();
		temp = 0;
		result = 0;
	}

	return 0;
}

#endif 