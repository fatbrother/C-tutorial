#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true, b = false;
    a || printf("a ||\n");  // if (!a) printf("a ||\n");
    b || printf("b ||\n");  // if (!b) printf("b ||\n");
    a && printf("a &&\n");  // if (a) printf("a &&\n");
    b && printf("b &&\n");  // if (b) printf("b &&\n");

    return 0;
}