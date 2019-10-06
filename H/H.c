#include <stdio.h>
#include <math.h>

int main() {
  int input, output;
  int i, j, k, n;
  int a=0, b=0, c=0;
  int b1=1, b2=1;

  scanf("%d", &input);

  n = (int)floor(sqrt((double)input));

  for (i = 0; b1 && i <= n; i++) {
    if (i > 0) a = 1;
    for (j = 0; b2 && j <= n; j++) {
      if (j > 0) b = 1;
      for (k = 0; k <= n; k++) {
        if (k > 0) c = 1;
        if (input == i*i + j*j + k*k) {
          output = a + b + c;
          b1 = 0; b2 = 0; break;
        }
      }
    }
  }

  if (b1) output = 4;

  printf("%d\n", output);

  return 0;
}
