#include <stdio.h>

struct Person
{
    char *name;
    int age;
};

void printPerson(struct Person p)
{
    printf("%s %d\n", p.name, p.age);
}

int main()
{
    struct Person p;
    p.age = 30;
    p.name = "John";
    struct Person p2 = {"Jane", 25};
    struct Person p3 = {.age = 20, .name = "Jack"};
    printPerson(p3);
    return 0;
}