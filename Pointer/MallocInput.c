#include <stdio.h>
#include <stdlib.h>

void printArray(int **a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
}
int main()
{
    int **a = (int**)malloc(sizeof(int*) * 5);
    for (int i = 0; i < 5; i++)
        a[i] = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            a[i][j] = i + j;
    printArray(a, 5, 5);
    for (int i = 0; i < 5; i++)
        free(a[i]);
    free(a);
    return 0;
}