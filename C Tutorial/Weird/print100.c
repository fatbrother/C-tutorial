#include <stdio.h>
#define print32 print16; print16;
#define print16 print8; print8;
#define print8 print4; print4;
#define print4 print2; print2;
#define print2 print1; print1;
#define print1 printf("Hello, World!\n");


int main()
{
    print32;
    return 0;
}