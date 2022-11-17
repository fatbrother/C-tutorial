#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        int num = 0;
        scanf("%d", &num);

        int isPrime = 1;
        for (int i = 2; i * i < num && isPrime; i++)
            if (num % i == 0)
                isPrime = 0;

        int reverse = 0, temp = num;
        while (temp != 0)
        {
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }

        int isEmirp = 1;
        for (int i = 2; i * i < reverse && isEmirp; i++)
            if (reverse % i == 0)
                isEmirp = 0;

        if (!isPrime)
            printf("%d is not prime.\n", num);
        else if (isEmirp && num != reverse)
            printf("%d is emirp.\n", num);
        else
            printf("%d is prime.\n", num);
    }
    return 0;
}