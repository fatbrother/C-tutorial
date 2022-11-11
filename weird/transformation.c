#include <stdio.h>
#include <limits.h>

int main()
{
    int a = 5;
    printf("%f\n", a / 2);   
    printf("%f\n", a / 2.f);   

    int b = INT_MAX;
    printf("%d\n", b * 2); // overflow
    printf("%d\n", b * 2.l);

    return 0;
}