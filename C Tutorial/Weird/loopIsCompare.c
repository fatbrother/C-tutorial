#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    while (a == b)
    {
        printf("Hello, World!\n");
        break;
    }

    for (; a == b;)
    {
        printf("Hello, World!\n");
        break;
    }
    return 0;
}