// include lib
#include <stdio.h>

// main function
int main()
{
    // 資料型態 名稱[大小][大小];
    int a[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    // 取出a[1][2]的值
    int b = a[1][2];
    // 將a[0][0]的值設為5
    a[0][0] = 5;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]); // 取得某個元素的值
        printf("\n");
    }
}