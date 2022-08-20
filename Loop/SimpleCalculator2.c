#include <stdio.h>
int main()
{
    float n1, n2;
    char op;
    printf("Please enter the calculate: ");
    while (scanf("%d%c%d", &n1, &op, &n2) != EOF)
    {
        if (op == '+')
            printf("%f\n", n1 + n2);
        else if (op == '-')
            printf("%f\n", n1 - n2);
        else if (op == '*')
            printf("%f\n", n1 * n2);
        else if (op == '/' && n2 != 0)
            printf("%f\n", n1 / n2);
        else
            printf("Error");
        printf("Please enter the calculate: ");
    }
    return 0;
}