#include <stdio.h>

int arr[1001] = {0};

void backtracking(int i, int n)
{
    if (i == n)
    {
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k] + 1);
        printf("\n");
        return;
    }
    for (int j = 0; j < n; j++)
    {
        arr[i] = j;
        backtracking(i + 1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    backtracking(0, n);
    return 0;
}
