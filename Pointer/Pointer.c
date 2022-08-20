#include <stdio.h>

int main()
{
    int a = 87;
    int *b = &a;
    printf("%d\n", *b); // 87
    return 0;
}