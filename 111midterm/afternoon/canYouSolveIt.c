#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int c = 1; c <= n; c++)
    {
        int sx, sy, ex, ey;
        scanf("%d %d %d %d", &sx, &sy, &ex, &ey);

        long long r2s = 0;
        for (int i = 1; i <= sx + sy; i++)
            r2s += i;
        r2s += sx;

        long long r2e = 0;
        for (int i = 1; i <= ex + ey; i++)
            r2e += i;
        r2e += ex;

        printf("Case %d: %lld\n", c, r2e - r2s);
    }
    return 0;
}