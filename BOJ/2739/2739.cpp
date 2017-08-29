#include <cstdio>

int main ()
{
  int d;
  scanf("%d", &d);
  for (int i=1;i<10;i++)
    printf("%d * %d = %d\n", d, i, d*i);

  return 0;
}
