#include <stdio.h>

int main()
{
    int a = 3894, b = 12534;
    a ^= b ^= a ^= b;
    printf("a: %d, b: %d\n", a, b);
    return 0;
}