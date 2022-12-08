#include <stdio.h>

int dp[1000] = {1, 1};
int fib(int n)
{
    if (dp[n] != 0)
        return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
}