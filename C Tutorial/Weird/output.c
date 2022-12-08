#include <stdio.h>

int main()
{
    int n = 10;
    printf("%.*f\n", n, (float)n);
    printf("%%%%%%%%%%\n");
    printf("ASCII \'\\n\' = %d\n", '\n');
    
    double b = 1e5;
    printf("b = %e\n", b);

    int i = 16;
    printf("i = %x\n", i);
    printf("i = %#x\n", i);

    int a = printf("123456\n");
    printf("a = %d\n", a);

    return 0;
}