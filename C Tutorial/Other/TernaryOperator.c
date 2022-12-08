#include <stdio.h>
#define string char*
string compare(int a, int b)
{
    return a > b ? "greater" : a == b ? "equal" : "less";
}

int main()
{
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("%s\n", compare(a, b));
    return 0;
}