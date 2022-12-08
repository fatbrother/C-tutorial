#include <stdio.h>

int main()
{
    int a = 131, b = 61361, c = 513;
    printf("a ^ b ^ c: %d\n", a ^ b ^ c);
    printf("a ^ c ^ b: %d\n", a ^ c ^ b);
    printf("b ^ a ^ c: %d\n", b ^ a ^ c);
    printf("b ^ c ^ a: %d\n", b ^ c ^ a);
    printf("c ^ a ^ b: %d\n", c ^ a ^ b);
    printf("c ^ b ^ a: %d\n", c ^ b ^ a);
    return 0;
}