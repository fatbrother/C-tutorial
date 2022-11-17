#include <stdio.h>

int main()
{
    char letter;
    scanf(" %c", &letter);

    if ((letter < 'a' || letter > 'z') && (letter < 'A' || letter > 'Z'))
        printf("not English.\n");
    else if (letter == 'a' || letter == 'A')
        printf("the first.\n");
    else if (letter == 'z' || letter == 'Z')
        printf("the last.\n");
    else
    {
        if (letter >= 'a' && letter <= 'z')
            letter -= 32;
        
        printf("%c%c", letter - 1, letter + 1);
    }

    return 0;
}