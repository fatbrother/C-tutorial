#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        int l, res = 1, num;
        scanf("%d %d", &l, &num);
        num--;

        while (--l)
        {
            res *= 2;
            res += num % 2;
            num /= 2;
        }

        printf("%d\n", res);
    }
    return 0;
}