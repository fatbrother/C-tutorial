#include <stdio.h>

void add(int *a)
{
    for (int i = 0; i < 3; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a = 87;
    add(&a);
    return 0;
}