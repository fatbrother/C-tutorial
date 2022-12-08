#include <stdio.h>


int i = 0;
int main()
{
    if (i < 10)
    {
        printf("%d ", i++);
        main();
    }
    return 0;
}