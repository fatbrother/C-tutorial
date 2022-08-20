#include <stdio.h>

typedef struct {
    char *name;
    int age;
} Person;

void printPerson(Person p)
{
    printf("%s %d\n", p.name, p.age);
}

int main()
{
    Person p = {"John", 20};
    p.age = 30;
    printPerson(p); // John 30
    return 0;
}