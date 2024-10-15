#include <stdio.h>

void calculate_the_maximum(int n, int k) {
  int max_and = 0, max_or = 0, max_xor = 0;
  for(int i=1; i<n; i++){
    for(int j=i+1; j<=n; j++){
      int and = i&j, or = i|j, xor = i^j;
      if (and < k && and > max_and) max_and = and;
      if (or < k && or > max_or) max_or = or;
      if (xor < k && xor > max_xor) max_xor = xor;
    }
  }
  printf("%d\n", max_and);
  printf("%d\n", max_or);
  printf("%d\n", max_xor);
}

int main() {
  int n, k; 
  printf("enter numbers: ");
  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);
  return 0;
}
