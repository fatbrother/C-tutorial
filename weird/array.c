#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, i[a]); // print the value of a[i]
    return 0;
}