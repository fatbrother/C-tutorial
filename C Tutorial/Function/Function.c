#include <stdio.h>

// make a function that says hi
void sayHi()
{
    printf("Hi\n");
}

// make a function that says bye
void sayBye();
int main()
{
    char name[100];
    printf("What is your name?\n");
    scanf("%s", name);
    sayHi(name);
    sayBye(name);
    return 0;
}

void sayBye()
{
    printf("Bye\n");
}