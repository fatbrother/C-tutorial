#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] <= 1)
                continue;
            for (int dx = -1; dx <= 1; dx++)
                for (int dy = -1; dy <= 1; dy++)
                {
                    int x = i + dx, y = j + dy;
                    if (x < 0 || y < 0 || x >= n || y >= m)
                        continue;
                    if (x == i && y == j)
                        continue;
                    if (arr[x][y] >= 2)
                        arr[i][j] = arr[x][y] = 2;
                }
        }

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 1)
                continue;
            for (int dx = -1; dx <= 1; dx++)
                for (int dy = -1; dy <= 1; dy++)
                {
                    int x = i + dx, y = j + dy;
                    if (x < 0 || y < 0 || x >= n || y >= m)
                        continue;
                    if (arr[x][y] == 5)
                    {
                        cnt1 += arr[i][j];
                        arr[i][j] = 0;
                    }
                }
            cnt2 += arr[i][j];
        }

    printf("%d %d\n", cnt1, cnt2);
    return 0;
}