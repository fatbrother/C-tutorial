#include <stdio.h>

int main()
{
    int a = 0;
    printf("%d\n", a++); // 0
    printf("%d\n", a);   // 1
    printf("%d\n", ++a); // 2
    printf("%d\n", a);   // 2
    return 0;
}