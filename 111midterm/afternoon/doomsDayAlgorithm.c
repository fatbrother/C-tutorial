#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int month[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    char *week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int start = 6;
    while (n--)
    {
        int m, d;
        scanf("%d %d", &m, &d);

        int now = month[m - 1] + d - 1;
        printf("%s\n", week[(now + start) % 7]);
    }
    
    return 0;
}