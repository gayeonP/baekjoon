#define _CRT_SECURE_NO_WARNINGS
// 11654
#if 0

#include <stdio.h>

int main() {

   char c = 0;
   scanf("%c", &c);
   printf("%d\n", c);

   return 0;
}

#endif
// 11720
#if 0

#include <stdio.h>

int main() {

   int n = 0, result = 0;
   char arr[100] = { 0, };
   scanf("%d\n", &n);
   scanf("%s", &arr);

   for (int i = 0; i < n; i++) {
      result += (arr[i] - 48);
   }
   printf("%d\n", result);

   return 0;
}

#endif
// 10809
#if 0

#include <stdio.h>

int main() {

   char arr[100] = { 0, };
   int result[26] = { 0, };
   scanf("%s", &arr);
   for (int i = 0; i < 26; i++) {
      result[i] = -1;
   }

   for (int i = 0; arr[i] != 0; i++) {
      if (result[arr[i] - 97] == -1) result[arr[i] - 97] = i;
   }
   for (int i = 0; i < 26; i++) {
      printf("%d ", result[i]);
   }

   return 0;
}

#endif
// 2675
#if 0

#include <stdio.h>

int main() {

   int t = 0, r = 0;
   char arr[20] = { 0, };
   scanf("%d", &t);
   
   for (int i = 0; i < t; i++) {
      scanf("%d %s", &r, &arr);
      for (int j = 0; arr[j] != 0; j++) {
         for (int k = 0; k < r; k++) {
            printf("%c", arr[j]);
         }
         arr[j] = 0;
      }
      printf("\n");
   }

   return 0;
}

#endif
// 1157
#if 0

#include <stdio.h>

int main() {

   char arr[1000000] = { 0, };
   int check[26] = { 0, };
   int max = 0, flag = 0, result = 0;
   scanf("%s", &arr);
   
   for (int i = 0; arr[i] != 0; i++) {
      if (arr[i] < 97) check[arr[i] - 65]++;
      else check[arr[i] - 97]++;
   }
   for (int i = 0; i < 26; i++) {
      if (max != 0 && check[i] == max) flag = 1;
      if (check[i] > max) {
         max = check[i];
         result = i;
         flag = 0;
      }
   }
   if (flag) printf("?\n");
   else printf("%c\n", result + 65);

   return 0;
}

#endif
// 1152
#if 0

#include <stdio.h>

int main() {

   char arr[1000001] = { 0, };
   int result = 0;
   fgets(arr, sizeof(arr), stdin);
   
   for (int i = 0; arr[i] != 0; i++) {
      if (arr[i] == ' ' && arr[i + 1] != '\n' && i != 0) result++;
   }
   if (arr[0] == '\n') printf("0\n");
   else if (arr[0] == ' ' && arr[1] == '\n') printf("0\n");
   else if (arr[0] != ' ' && arr[1] == ' ' && arr[2] == '\n') printf("1\n");
   else printf("%d\n", result + 1);

   return 0;
}

#endif
// 2908
#if 1

#include <stdio.h>

int main() {
   


   return 0;
}

#endif