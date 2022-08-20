#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
// int compare(int *a, int *b) { return *a - *b; }
int main()
{
    int a[] = {0, 5, 3, 7, 6, 2, 1, 4};
    qsort(a, 8, sizeof(int), compare);
    for (int i = 0; i < 8; i++)
        printf("%d ", a[i]);
}