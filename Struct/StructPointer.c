#include <stdio.h>

typedef struct {
    char *name;
    int age;
} Person;

void printPerson(Person *p)
{
    // printf("%s %d\n", (*p).name, (*p).age);
    printf("%s %d\n", p->name, p->age);
}

int main()
{
    Person p = {"John", 20};
    printPerson(&p); // John 20
    return 0;
}