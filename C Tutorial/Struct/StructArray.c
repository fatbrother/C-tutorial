#include <stdio.h>
typedef struct {
    char *name;
    int age;
} Person;
int main()
{
    Person people[] = {
        {"John", 20},
        {"Mary", 21},
        {"Tom", 22},
        {"Jane", 23},
        {"Jack", 24}
    };
    for (int i = 0; i < 5; i++)
        printf("%s %d\n", people[i].name, people[i].age);
    return 0;
}