#include <stdio.h>

int main(void)
{
    int score = 0;
    int level = 0;
    scanf("%d", &score);
    level = score / 10;
    switch (level)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("B");
        break;
    case 8:
        printf("C");
        break;
    default:
        printf("E");
    }
    return 0;
}