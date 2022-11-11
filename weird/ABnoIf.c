#include <stdio.h>

int main()
{
    int num1[4], num2[4];
    for (int i = 0; i < 4; i++)
        scanf("%1d", &num1[i]);
    for (int i = 0; i < 4; i++)
        scanf("%1d", &num2[i]);

    int A = 0, B = 0;
    for (int i = 0; i < 4; i++)
        A += (num1[i] == num2[i]);
    
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            B += (i != j && num1[i] == num2[j]);
    
    printf("%dA %dB", A, B);

    return 0;
}