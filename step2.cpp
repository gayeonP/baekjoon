#define _CRT_SECURE_NO_WARNINGS
// 1330
#if 0

#include <stdio.h>

int main() {
	
	int a = 0, b = 0;

	scanf("%d %d", &a, &b);

	if (a == b)
		printf("==\n");
	else if (a > b)
		printf(">\n");
	else
		printf("<\n");

	return 0;
}

#endif
// 9498
#if 0

#include <stdio.h>

int main() {

	int a = 0;
	scanf("%d", &a);

	if (a >= 90 && a <= 100)
		printf("A\n");
	else if (a >= 80 && a < 90)
		printf("B\n");
	else if (a >= 70 && a < 80)
		printf("C\n");
	else if (a >= 60 && a < 70)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}

#endif
// 2753
#if 0

#include <stdio.h>

int main() {

	int year = 0;
	scanf("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
		printf("1\n");
	else
		printf("0\n");

	return 0;
}

#endif 
// 14681
#if 0

#include <stdio.h>

int main() {

	int x = 0, y = 0;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0) {
		if (y > 0)
			printf("1\n");
		else
			printf("4\n");
	}
	else {
		if (y > 0)
			printf("2\n");
		else
			printf("3\n");
	}

	return 0;
}

#endif
// 2884
#if 0

#include <stdio.h>

int main() {

	int hr = 0, min = 0;
	scanf("%d %d", &hr, &min);

	if (min >= 45)
		printf("%d %d\n", hr, min - 45);
	else {
		if (hr == 0)
			printf("23 %d\n", min + 15);
		else
			printf("%d %d\n", hr - 1, min + 15);
	}

	return 0;
}

#endif