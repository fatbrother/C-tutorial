#include <stdio.h>

int a = 1;
int main()
{
    printf("a = %d\n", a);
    int a = 10;

    {
        int a = 20;
        int b = 100;
        printf("a = %d\n", a);
    }

    // printf("%d\n", b); // Error: b is not defined

    printf("a = %d\n", a);
    return 0;
}