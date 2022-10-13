#include <stdio.h>

int main()
{

    int a[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};
    
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
        
    return 0;
}