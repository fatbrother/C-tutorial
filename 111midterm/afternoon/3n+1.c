#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        int l, r, maxi = 0;
        scanf("%d %d", &l, &r);

        for (int i = l; i <= r; i++)
        {
            int cnt = 1, num = i;
            for (; num != 1; cnt++)
                num = num % 2 == 0 ? num / 2 : 3 * num + 1;
        
            if (cnt > maxi)
                maxi = cnt;
        }

        printf("%d\n", maxi);
    }
    return 0;
}