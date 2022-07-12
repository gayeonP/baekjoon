#define _CRT_SECURE_NO_WARNINGS
// 10952
#if 0

#include <stdio.h>

int main() {

	int a = 1, b = 1;
	
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		printf("%d\n", a + b);
	}

	return 0;
}

#endif
// 10951
#if 0

#include <stdio.h>

int main() {

	int a = 0, b = 0;
	
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}

	return 0;
}

#endif
// 1110
#if 0

#include <stdio.h>

int main() {

	int n = 0, m = 100, count = 0;
	scanf("%d", &n);

	while (m != n) {
		if (count == 0) m = n;
		if (count == 0 && n < 10) m *= 11;
		else m = ((m % 10) * 10) + (((m / 10) + (m % 10)) % 10);
		count++;
	}

	printf("%d\n", count);

	return 0;
}

#endif