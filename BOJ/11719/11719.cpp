#include <cstdio>

char c;
int main () {
  while ((c = getchar()) && c!=EOF) {
    printf("%c", c);
  }

  return 0;
}
