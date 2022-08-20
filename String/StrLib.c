#include <stdio.h>
#include <string.h>

int main()
{
    // show some func of string.h and explain it
    char str[] = "hello";
    // strlen is a function that return the length of a string
    printf("%d\n", strlen(str));
    // strcpy is a function that copy a string to another string
    strcpy(str, "world");
    printf("%s\n", str);
    // strcat is a function that concatenate two strings
    printf("%s\n", strcat(str, "!"));
    // strcmp is a function that compare two strings
    printf("%d\n", strcmp(str, "world!"));

    return 0;
}