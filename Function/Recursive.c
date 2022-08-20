// fabonacci example code
#include <stdio.h>

int fabonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fabonacci(n - 1) + fabonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", fabonacci(n));
    return 0;
}