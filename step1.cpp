#define _CRT_SECURE_NO_WARNINGS

// 10171
#if 0
#include <stdio.h>

int main() {

	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|\n");

	return 0;
}

#endif

// 1008
#if 0

#include <stdio.h>

int main() {

	double a = 0, b = 0;

	scanf("%d %d", &a, &b);
	printf("%0.9f\n", a / b);

	return 0;
}

#endif

// 10869
#if 0

#include <stdio.h>

int main() {

	int a = 0, b = 0;

	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}

#endif

// 10430
#if 0

#include <stdio.h>

int main() {

	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);

	return 0;
}

#endif

// 2588
#if 0

#include <stdio.h>

int main() {

	int a = 0, b = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", (a * ((b % 100) - (b % 10))) / 10);
	printf("%d\n", (a * (b - (b % 100))) / 100);
	printf("%d\n", a * b);

	return 0;
}

#endif