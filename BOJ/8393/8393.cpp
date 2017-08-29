#include <stdio.h>

int main ()
{
    int n = 0;
    int result = 0;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
        result += i+1;

    printf("%d\n", result);
    return 0;
}
