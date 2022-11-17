#include <stdio.h>

int main()
{
    int n = 0, cnt = 0, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp == 0)
            cnt++;
        else
            printf("%d%c", tmp, " \n"[cnt == 0 && i == n - 1]);
    }

    for (int i = 0; i < cnt; i++)
        printf("0%c", " \n"[i == cnt - 1]);

    return 0;
}