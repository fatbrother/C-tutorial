#include <stdio.h>

int main()
{
    // 資料型態 名稱[大小];
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int b = a[3]; // 取出第三個元素的值
    a[0] = 5;     // 將第零元素的值設為5

    for (int i = 0; i < 10; i++)
        printf("%d\n", a[i]); // 取得某個元素的值
        
    return 0;
}