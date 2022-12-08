#include <stdio.h>

void add1(int x);
int add2(int x);
void add3(int *x);
int main()
{
    int x = 1;
    printf("Adress x = %p\n", &x);

    add1(x);
    printf("%d\n", x); // 1
    x = add2(x);
    printf("%d\n", x); // 2
    add3(&x);
    printf("%d\n", x); // 3
    return 0;
}

void add1(int x)
{
    printf("Adress x in add1 = %p\n", &x);
    x++;
}

int add2(int x)
{
    printf("Adress x in add2 = %p\n", &x);
    return x + 1;
}

void add3(int *x)
{
    printf("Adress x in add3 = %p\n", x);
    (*x) += 1;
}