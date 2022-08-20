#include <stdio.h>

int main()
{
    int n = 3;
    int a[3] = {1, 2, 3};
    int *b = a;
    for (int i = 0; i < n; i++)
        printf("%d ", *(b + i)); // 1 2 3
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]); // 1 2 3
}