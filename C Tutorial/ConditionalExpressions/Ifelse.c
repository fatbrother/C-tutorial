#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;     
    scanf("%d%d", &a, &b); 
    if (a > b)
    {
        printf("Success!!");
    }
    else if (a < b) 
        printf("Lose!!");
    else
    {
        printf("Tie!!!!");
    }
    return 0;
}