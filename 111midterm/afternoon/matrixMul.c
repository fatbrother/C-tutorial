#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    int matrix1[n1][n2];
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &matrix1[i][j]);
    
    int n3, n4;
    scanf("%d%d", &n3, &n4);
    int matrix2[n3][n4];
    for (int i = 0; i < n3; i++)
        for (int j = 0; j < n4; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            int tmp = 0;
            for (int k = 0; k < n2; k++)
                tmp += matrix1[i][k] * matrix2[k][j];
            printf("%d ", tmp);
        }
        printf("\n");
    }
    
    return 0;
}