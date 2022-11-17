#include <stdio.h>

int main()
{
    int cnt[10] = {0};
    int order[10] = {0};
    int index = 0;
    char tmp;

    while (scanf("%c", &tmp) != EOF)
    {
        int now = tmp - '0';

        int i = 0;
        for (; i < index; i++)
            if (order[i] == now)
            {
                cnt[now]++;
                break;
            }
        
        if (i == index)
        {
            order[index] = now;
            cnt[now]++;
            index++;
        }
    }

    for (int i = 0; i < index; i++)
        printf("%d%d", cnt[order[i]], order[i]);

    return 0;
}