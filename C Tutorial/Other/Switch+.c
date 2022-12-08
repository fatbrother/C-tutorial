#include <stdio.h>
#define string char *

int main()
{
    int i = 0;
    scanf("%d", &i);
    switch (i)
    {
    case 1:
    case 0:
    {
        string a = "hello";
        printf("%s\n", a);
    }
    }
}