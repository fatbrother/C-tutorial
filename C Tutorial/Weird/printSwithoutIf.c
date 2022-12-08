#include <stdio.h>

int main()
{
    int a = 1;
    printf("there are %d apple%c.", a, "s"[a == 1]);
    return 0;
}