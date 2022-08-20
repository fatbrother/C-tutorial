#include <stdio.h>
#include <stdlib.h>
#define string char*

int main()
{
    string str = "12345";
    int num = atoi(str);
    printf("%d\n", num);
}