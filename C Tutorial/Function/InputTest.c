#include <stdio.h>

void add(int a) { a++; }
int add2(int a) { return a + 2; }
int main()
{
    int a = 1;
    add(a);
    printf("%d\n", a); // 1
    a = add2(a);
    printf("%d\n", a); // 3
    return 0;
}