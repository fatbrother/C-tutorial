#include <stdio.h>

// make a function that says hi
void sayHi(char *name)
{
    printf("Hi %s\n", name);
}

// make a function that says bye
void sayBye(char *name);
int main()
{
    char name[100];
    printf("What is your name?\n");
    scanf("%s", name);
    sayHi(name);
    sayBye(name);
    return 0;
}

void sayBye(char *name)
{
    printf("Bye %s\n", name);
}

