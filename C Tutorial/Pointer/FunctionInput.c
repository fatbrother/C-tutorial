#include <stdio.h>

void add(int *a)
{
    *a += 1;
}
int main()
{
    int a = 87;
    add(&a);
    printf("%d", a);
    return 0;
}