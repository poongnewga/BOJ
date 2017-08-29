#include <stdio.h>

int main ()
{
  int n,sum;
  int i=2;
  while(i--) {
    scanf("%d", &n);
    sum += n;
  }
  printf("%d\n", sum);
  return 0;
}
