#include <stdio.h>
#define M 16769023

int fn(int n) {
  int tmp = 1;
  for (int i = 0; i < n; ++i) {
    tmp = ((tmp % M) * (2 % M)) % M;
  }
  return tmp;
}

int main() {
   int n;
   scanf("%d", &n);

   int answer;
   answer = fn(n / 2 + n % 2);

   printf("%d", answer);

   return 0;
}
