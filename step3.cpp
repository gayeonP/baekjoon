#define _CRT_SECURE_NO_WARNINGS
// 2739
#if 0

#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}

	return 0;
}

#endif
// 10950
#if 0

#include <stdio.h>

int main() {

	int t = 0;
	int a = 0, b = 0;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}

#endif
// 8393
#if 0

#include <stdio.h>

int main() {

	int n = 0, res = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		res += i;
	
	printf("%d\n", res);

	return 0;
}

#endif
// 15552
#if 0

//#include <stdio.h>
//
//int main() {
//
//	int t = 0, a = 0, b = 0;
//	scanf("%d", &t);
//
//	for (unsigned int i = 0; i < t; i++) {
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}

#include <iostream>

int main() {

	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int t = 0, a = 0, b = 0;
	std::cin >> t;

	for (unsigned int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}

#endif
// 2741
#if 0

#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);

	for (unsigned int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}

	return 0;
}

#endif
// 2742
#if 0

#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		printf("%d\n", i);
	}

	return 0;
}

#endif
// 11021
#if 0

#include <stdio.h>

int main() {

	int t = 0, a = 0, b = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}

	return 0;
}

#endif
// 11022
#if 0

#include <stdio.h>

int main() {

	int t = 0, a = 0, b = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}

	return 0;
}

#endif
// 2438
#if 0

#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif
// 2439
#if 0

#include <stdio.h>

int main() {

	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

#endif
// 10871
#if 0

#include <stdio.h>

int main() {

	int a = 0, x = 0, n = 0;
	scanf("%d %d", &a, &x);

	for (int i = 0; i < a; i++) {
		scanf("%d ", &n);
		if (n < x) printf("%d\n", n);
	}

	return 0;
}

#endif