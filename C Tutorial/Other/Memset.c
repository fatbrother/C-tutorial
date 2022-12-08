#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int n, int array[n])
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int* a = (int*)malloc(sizeof(int) * 10);
    memset(a, 0, sizeof(int) * 10);
    print(10, a);
    free(a);    
    return 0;
}