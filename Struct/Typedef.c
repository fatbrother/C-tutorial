#include <stdio.h>

struct Person
{
    char *name;
    int age;
} typedef Person;

typedef struct Person
{
    char *name;
    int age;
}  Person;

struct Person
{
    char *name;
    int age;
};
typedef struct Person Person;

typedef struct {
    char *name;
    int age;
} Person;

int main()
{
    Person p;
    return 0;
}