#include <stdio.h>

void printArray(int n, int m, int array[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
}

int main()
{
    int a[6][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20},
                    {21, 22, 23, 24, 25},
                    {26, 27, 28, 29, 30}};

    printArray(6, 5, a);
    return 0;
}