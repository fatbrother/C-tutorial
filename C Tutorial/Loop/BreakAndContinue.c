#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        if (i == 5)
        {
            break; // 大家自己試試看兩個的差別
            // continue;
        }

        printf("i = %d\n", i);
    }
}