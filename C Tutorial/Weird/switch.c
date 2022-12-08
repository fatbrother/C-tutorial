#include <stdio.h>

int main()
{
    int i = 0;
    // scanf("%d", &i);
    // switch (i)
    // {
    // case 0:
    // case 1:
    //     printf("Hello\n");
    //     break;
    // case 2:
    // {
    //     int a = 10;
    //     printf("World %d\n", a);
    // }
    // default:
    //     printf("Default\n");
    //     break;
    // }

    int sum = 0;
    scanf("%d", &i);
    switch (i > 5 ? 5 : i)
    {
        case 5:
            sum += 5;
        case 4:
            sum += 4;
        case 3:
            sum += 3;
        case 2:
            sum += 2;
        case 1:
            sum += 1;
        case 0:
            break;
    }
    printf("sum = %d\n", sum);
    return 0;
}